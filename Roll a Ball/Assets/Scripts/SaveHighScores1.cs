using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using Parse; 

public class HighScores : MonoBehaviour {



	public bool parseNeedsUpdate = false;
	public bool scoreNeedsUpdate = false;
	//public Text ScoreBoardText;

	string userName;
	int ballScore;

	public GameObject newHighScorePanel;

	public struct ScoreEntry{
		public int ballScore;
		public string userName;
	}


	//Call Parse
	public void Awake()
	{
		var query = ParseObject.GetQuery ("PatrickTest1")
			.WhereExists("UserName")
				.WhereExists("BallScore")
				.OrderByDescending ("BallScore")
				.Limit(5);
		var task = query.FindAsync();
		task.ContinueWith( (t) => {
			foreach(ParseObject patrickTest1 in t.Result){ 
				Debug.Log (patrickTest1.Get<string>("UserName")+patrickTest1.Get<int>("BallScore"));
				userName = patrickTest1.Get<string>("UserName");
				ballScore = patrickTest1.Get<int>("BallScore");
				scoreNeedsUpdate = true;

			}
		} );
	 }
		


	// Use this for initialization
	void Start () {

	}

	void SetScoreBoardText()
	{

	}
	
	void Update () {
		
		if (scoreNeedsUpdate)
		{
			//ScoreBoardText.text = ?;
			scoreNeedsUpdate = false;
		}

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
}

