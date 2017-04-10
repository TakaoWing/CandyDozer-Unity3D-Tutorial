using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Shooter : MonoBehaviour {

	const int SphereCandyFrequency = 3;

	int sampleCandyCount;

	public GameObject[] candyPrefabs;
	public GameObject[] candySquarePrefabs;
	public float shotSpeed;
	public float shotTorque;
	public float baseWidth;

	void Start () {
		
	}

	void Update () {
		if (Input.GetButtonDown ("Fire1"))
			Shot ();
	}

	GameObject SampleCandy(){
		
		GameObject prefab = null;

		// 特定の回数に一回丸いCandyを選択
		if (sampleCandyCount % SphereCandyFrequency == 0) {
			int index = Random.Range (0, candyPrefabs.Length);
			prefab = candyPrefabs [index];
		} else {
			int index = Random.Range (0, candySquarePrefabs.Length);
			prefab = candyPrefabs [index];
		}

		sampleCandyCount++;

		return prefab;
	}

	public void Shot(){
		// プレファブからCandyオブジェクトを生成
		GameObject candy = Instantiate(SampleCandy(), transform.position, Quaternion.identity) as GameObject; // オブジェクトの生成

		// CadnyオブジェクトのRigidbodyを取得し力と回転を加える
		Rigidbody candyRigidBody = candy.GetComponent<Rigidbody>();
		candyRigidBody.AddForce (transform.forward * shotSpeed);
		candyRigidBody.AddTorque(new Vector3(0,shotTorque,0));
	}
}
