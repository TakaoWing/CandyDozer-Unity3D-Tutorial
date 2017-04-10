using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PusherController : MonoBehaviour {

	Vector3 startPosition;

	public float amplitude; // 移動量パラメーター
	public float speed; // 移動速度パラメーター

	void Start () {
		startPosition = transform.localPosition; // 初期位置の保存
	}

	void Update () {
		// 変位を計算
		float z = amplitude * Mathf.Sin(Time.time * speed); // 移動量の計算

		// zを変位させたポジションに再設定
		transform.localPosition = startPosition + new Vector3(0,0,z); // 位置の反映
	}
}
