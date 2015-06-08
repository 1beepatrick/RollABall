using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using System.Linq;
using Parse;

public class SavePanaleActivator : MonoBehaviour {

	//test buttons delete later
	public Button highScore,lowScore;
	public GameObject newHighScorePanel; 
	//public bool newHighScore = false; 

	public int score, playerScore;
	public string name;

	void Awake () {
		var query = ParseObject.GetQuery("PatrickTest1")
			.WhereExists("UserName")
				.WhereExists("BallScore")
				.OrderByDescending("BallScore") 
				.Limit(5);
		var task = query.FindAsync();
		task.ContinueWith( (t) => {
			foreach(ParseObject patrickTest1 in t.Result){
				score = patrickTest1.Get<int>("BallScore"); 
				name = patrickTest1.Get<string>("UserName");
				Debug.Log(score);
			}
		});
	}

	public void SetHigh()
	{
		newHighScorePanel.SetActive(true); 
	}
	
	public void SetLow()
	{
		newHighScorePanel.SetActive(false); 
	}

	// Use this for initialization
	void Start () 
	{	playerScore = PlayerControle.count;

		//SetLow();
		newHighScorePanel.SetActive(false);
	}
	
	// Update is called once per frame
	void Update () {

		if (score <= playerScore) 
		{
			SetHigh();
			//newHighScorePanel.SetActive(true);
		}
		if (score > playerScore) 
		{
			SetLow();
			//newHighScorePanel.SetActive(true);
		}
	}

}
