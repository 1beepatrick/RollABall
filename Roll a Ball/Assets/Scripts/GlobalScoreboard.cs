using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using Parse;
using System.Linq;

public class GlobalScoreboard : MonoBehaviour {

	public struct ScoreEntry{
		public int score;
		public string name;
	}

	private List<ScoreEntry> topScores = new List<ScoreEntry>(); 
	
	void Awake () {
		var query = ParseObject.GetQuery("PatrickTest1") 
			.WhereExists("UserName")
				.WhereExists("BallScore")
				.OrderByDescending("BallScore") 
				.Limit(5);
		var task = query.FindAsync();
		
		task.ContinueWith( (t) => {
			topScores.Clear();
			foreach(ParseObject patrickTest1 in t.Result){
				topScores.Add(new ScoreEntry(){
					score=patrickTest1.Get<int>("BallScore"),
					name=patrickTest1.Get<string>("UserName")
				});
			}
		});
	}
	
	/*
	public void SetCurrentScore(int score){
		currentTopScore = score;
	}*/

	public bool IsHighScore(int score){
		var topfive = topScores.Take(5);
		if(topfive.Any()){
			return (score > topfive.Last().score);
		}else{
			return true;
		}
	}
	/*
	public void ClaimCurrentScore(string name){
		Debug.Log("score of "+currentTopScore.ToString()+" claimed by "+name);
		ParseObject gameScore = new ParseObject("BallScore");
		gameScore["UserName"] = name;
		gameScore["BallScore"] = currentTopScore;
		gameScore.SaveAsync();
	}*/
	
	public List<ScoreEntry> GetScores(){
		return topScores;
	}
}
