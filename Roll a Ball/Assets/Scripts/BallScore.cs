using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using Parse;

public class BallScore : MonoBehaviour {

	public bool parseNeedsUpdate = false;
	
	public Text highScoreText;


	// Use this for initialization
	void Start () 
	{
		SetHighScoreText();
	}
	
	public void OnSave()
	{
		parseNeedsUpdate = true;
	}

	// Update is called once per frame
	void Update () {
		
		
		if (parseNeedsUpdate)
		{//send user and score to parse
			ParseObject patrickTest1 = new ParseObject("PatrickTest1");
			patrickTest1["UserName"] = "UserName";//getName from login(Facebook)
			patrickTest1["BallScore"] = PlayerControle.count;//add score
			patrickTest1.SaveAsync();
			Debug.Log("created and saved to parse");
			parseNeedsUpdate = false;
		}
	}
	
	void SetHighScoreText()
	{
		highScoreText.text = "Your score was: " + PlayerControle.count.ToString();
		
	}

	
}

