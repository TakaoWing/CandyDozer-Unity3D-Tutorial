using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CandyHolder : MonoBehaviour {

	const int DefaultCandyAmount = 30;

	// 現在のキャンディのストック数
	int candy = DefaultCandyAmount;

	public void ConsumeCandy(){ // キャンディを減らす
		if(candy > 0) candy--;
	}

	public int GetCandyAmount(){ // 現在のキャンディのストック数を取得
		return candy;
	}

	public void AddCandy(int amount){ // 引数によってキャンディのストック数を増やす
		candy += amount;
	}

	void OnGUI(){
		GUI.color = Color.black;

		// キャンディのストック数を表示
		string label = "Candy : " + candy;

		GUI.Label (new Rect (0, 0, 100, 30), label);
	}
}
