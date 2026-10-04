#include "Human.h"

Human::Human(const string& n, int jh, int rd, int s) : Participant(n, jh, rd), stamina(s) {}

int Human::GetStamina() const { return stamina; }

void Human::SetStamine(int s) { stamina = s; }

bool Human::Jump(int h)
{
	return stamina-- > 0 && jumpHeight >= h;
}

bool Human::Run(int r)
{
	return stamina-- > 0 && runDistance >= r;
}
