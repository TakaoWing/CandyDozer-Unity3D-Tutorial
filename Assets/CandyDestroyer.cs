using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CandyDestroyer : MonoBehaviour {

	public CandyHolder candyHolder;
	public int reward;
	public GameObject effectPrefab; // エフェクトプレファブ
	public Vector3 effectRotation; // エフェクトローテーション


	void OnTriggerEnter(Collider other){ // 衝突したとき呼ばれる
		
		if (other.gameObject.tag == "Candy"){
			
			candyHolder.AddCandy (reward); // 指定数だけCandyのストックを増やす

			Destroy (other.gameObject); // オブジェクトの削除

			if (effectPrefab != null) {
				// Candyのポジションにエフェクトを生成
				Instantiate(effectPrefab, other.transform.position, Quaternion.Euler(effectRotation));
			}
		}
	}

}
