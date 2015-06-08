#pragma once

// GlobalScoreboard/ScoreEntry
struct ScoreEntry_t7;
struct ScoreEntry_t7_marshaled;

void ScoreEntry_t7_marshal(const ScoreEntry_t7& unmarshaled, ScoreEntry_t7_marshaled& marshaled);
void ScoreEntry_t7_marshal_back(const ScoreEntry_t7_marshaled& marshaled, ScoreEntry_t7& unmarshaled);
void ScoreEntry_t7_marshal_cleanup(ScoreEntry_t7_marshaled& marshaled);
