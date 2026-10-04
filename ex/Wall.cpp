#include "Wall.h"

Wall::Wall(const string& n, int h) : Obstacle(n), height(h) {}

bool Wall::Overcome(Participant& p) const { return p.Jump(height); }
