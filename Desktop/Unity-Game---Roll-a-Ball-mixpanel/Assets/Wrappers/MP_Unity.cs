using UnityEngine;
using System.Collections;

public class MP_Unity : MonoBehaviour {

	// Use this for initialization
	void Start () {
		MySDK.MixpanelInit ("wordpressapp");
		MySDK.MixpanelTrack ("Game Started");
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
