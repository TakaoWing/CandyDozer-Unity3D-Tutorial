using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CandyDestroyer : MonoBehaviour {


	void OnTriggerEnter(Collider other){ // 衝突したとき呼ばれる
		if (other.gameObject.tag == "Candy")
			Destroy (other.gameObject); // オブジェクトの削除
	}

}
