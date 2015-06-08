using UnityEngine;
using System.Collections;

public class CameraControler : MonoBehaviour {

	public GameObject player;

	private Vector3 offset;
	// Use this for initialization
	void Start () {
		offset = transform.position - player.transform.position;
	}
	
	// this Update is called after all items are prosesed after Update
	void LateUpdate () {
		transform.position = player.transform.position + offset;
	}
}
