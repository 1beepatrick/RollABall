using UnityEngine;
using System.Linq;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
	
public class ViewScoreBoard : MonoBehaviour {
		
	public GlobalScoreboard scoreboard;
	public Text scoresText;
	private Text scoreString;

		
	void Start () {
		scoreString = gameObject.GetComponent<Text>();
	}
		
	void Update () {
		List<GlobalScoreboard.ScoreEntry> scores = scoreboard.GetScores();
		if(scores.Count > 0){
			string scoreString = "";
			foreach(GlobalScoreboard.ScoreEntry entry in scores.Take(5)){
				scoreString += entry.name +": "+ entry.score.ToString()+"\n";
			}
			scoresText.text = scoreString;

		}
	}
}





























