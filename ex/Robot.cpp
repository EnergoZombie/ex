#include "Robot.h"

Robot::Robot(const string& n, int jh, int rd) : Participant(n, jh, rd) {}

int Robot::GetJumpAdaptation() const { return jumpAdaptation; }

int Robot::GetRunAdaptation() const { return runAdaptation; }

bool Robot::Jump(int h)
{
	return jumpHeight >= h - jumpAdaptation++;
}

bool Robot::Run(int r)
{
	return runDistance >= r - runAdaptation++;
}
