#include "Treadmill.h"

Treadmill::Treadmill(const string& n, int l) : Obstacle(n), length(l) {}

bool Treadmill::Overcome(Participant& p) const { return p.Run(length); }
