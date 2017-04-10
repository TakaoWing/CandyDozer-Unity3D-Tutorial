using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Shooter : MonoBehaviour {

	const int SphereCandyFrequency = 3;

	int sampleCandyCount;

	public GameObject[] candyPrefabs;
	public GameObject[] candySquarePrefabs;
	public CandyHolder candyHolder;
	public float shotSpeed;
	public float shotTorque;
	public float baseWidth;

	void Start () {
		
	}

	void Update () {
		if (Input.GetButtonDown ("Fire1"))
			Shot ();
	}

	GameObject SampleCandy(){ // プレファブの抽選
		
		GameObject prefab = null;

		// 特定の回数に一回丸いCandyを選択
		if (sampleCandyCount % SphereCandyFrequency == 0) {
			int index = Random.Range (0, candyPrefabs.Length);
			prefab = candyPrefabs [index];
		} else {
			int index = Random.Range (0, candySquarePrefabs.Length);
			prefab = candySquarePrefabs [index];
		}

		sampleCandyCount++;

		return prefab;
	}

	Vector3 GetInstantiatePosition(){ // 発射位置の計算

		// 画面のサイズとInputの割合からCandy生成の位置を計算
		float x = baseWidth * (Input.mousePosition.x / Screen.width) - (baseWidth / 2);
		return transform.position + new Vector3 (x, 0, 0);
	}

	public void Shot(){

		// Candyを生成できる条件外ならばShotしない
		if(candyHolder.GetCandyAmount() <= 0) return;

		// プレファブからCandyオブジェクトを生成
		GameObject candy = Instantiate(SampleCandy(), GetInstantiatePosition(), Quaternion.identity) as GameObject; // オブジェクトの生成

		// 生成したCandyオブジェクトの親をCandyHolderに設定する
		candy.transform.parent = candyHolder.transform;

		// CadnyオブジェクトのRigidbodyを取得し力と回転を加える
		Rigidbody candyRigidBody = candy.GetComponent<Rigidbody>();
		candyRigidBody.AddForce (transform.forward * shotSpeed);
		candyRigidBody.AddTorque(new Vector3(0,shotTorque,0));

		// Candyのストックを消費
		candyHolder.ConsumeCandy();
	}
}
