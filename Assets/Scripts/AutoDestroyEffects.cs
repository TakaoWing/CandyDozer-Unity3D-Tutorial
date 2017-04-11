using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AutoDestroyEffects : MonoBehaviour {

	ParticleSystem particle;

	void Start () {
		particle = GetComponent<ParticleSystem> ();
	}

	void Update () {
		// パーティカルの再生が終了したらGameObjectを削除
		if(particle.isPlaying == false) Destroy(gameObject);
	}
}
