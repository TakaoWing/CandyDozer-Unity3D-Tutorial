using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CandyDestroyer : MonoBehaviour {

	public CandyHolder candyHolder;
	public int reward;


	void OnTriggerEnter(Collider other){ // 衝突したとき呼ばれる
		if (other.gameObject.tag == "Candy"){
			candyHolder.AddCandy (reward); // 指定数だけCandyのストックを増やすs
			Destroy (other.gameObject); // オブジェクトの削除
		}
	}

}
