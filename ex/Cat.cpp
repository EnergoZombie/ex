#include "Cat.h"

Cat::Cat(const string& n, int jh, int rd, int l) : Participant(n, jh, rd), lives(l) {}

int Cat::GetLives() const { return lives; }

void Cat::SetLives(int l) { lives = l; }

bool Cat::Jump(int h)
{
	return jumpHeight >= h || --lives > 0;
}

bool Cat::Run(int r)
{
	return runDistance >= r || --lives > 0;
}

