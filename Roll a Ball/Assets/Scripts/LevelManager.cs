using UnityEngine;
using System.Collections;

public class LevelManager : MonoBehaviour {

	public void LoadLevel (string name) {
		Application.LoadLevel(name);
	}
	
	public void QuitReqest () {
		print ("Level Manager QuitReqest called");
		Application.Quit();
	}

}