#include "Obstacle.h"

Obstacle::Obstacle(const string& n) : name(n) {}

string Obstacle::GetName() const { return name; }

void Obstacle::SetName(const string& n) { name = n; }
