#pragma once

// HighScores/ScoreEntry
struct ScoreEntry_t16;
struct ScoreEntry_t16_marshaled;

void ScoreEntry_t16_marshal(const ScoreEntry_t16& unmarshaled, ScoreEntry_t16_marshaled& marshaled);
void ScoreEntry_t16_marshal_back(const ScoreEntry_t16_marshaled& marshaled, ScoreEntry_t16& unmarshaled);
void ScoreEntry_t16_marshal_cleanup(ScoreEntry_t16_marshaled& marshaled);
