#include "Participant.h"

Participant::Participant(const string& n, int jh, int rd) : name(n), jumpHeight(jh), runDistance(rd) {}

string Participant::GetName() const { return name; }

int Participant::GetJumpHeight() const { return jumpHeight; }

int Participant::GetRunDistance() const { return runDistance; }

void Participant::SetName(const string& n) { name = n; }

void Participant::SetJumpHeight(int jh) { jumpHeight = jh; }

void Participant::SetRunDistance(int rd) { runDistance = rd; }
