#pragma once
// System.String
struct String_t;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// HighScores/ScoreEntry
struct ScoreEntry_t16 
{
	// System.Int32 HighScores/ScoreEntry::ballScore
	int32_t ___ballScore_0;
	// System.String HighScores/ScoreEntry::userName
	String_t* ___userName_1;
};
// Native definition for marshalling of: HighScores/ScoreEntry
struct ScoreEntry_t16_marshaled
{
	int32_t ___ballScore_0;
	char* ___userName_1;
};
