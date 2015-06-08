#pragma once
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t4;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// HighScores
struct HighScores_t17  : public MonoBehaviour_t3
{
	// System.Boolean HighScores::parseNeedsUpdate
	bool ___parseNeedsUpdate_2;
	// System.Boolean HighScores::scoreNeedsUpdate
	bool ___scoreNeedsUpdate_3;
	// System.String HighScores::userName
	String_t* ___userName_4;
	// System.Int32 HighScores::ballScore
	int32_t ___ballScore_5;
	// UnityEngine.GameObject HighScores::newHighScorePanel
	GameObject_t4 * ___newHighScorePanel_6;
};
