#pragma once
#include "Participant.h"
#include <string>
#include <iostream>
using namespace std;

class Obstacle
{
	string name;
public:
	Obstacle(const string& n);

	string GetName() const;
	void SetName(const string& n);

	virtual bool Overcome(Participant& p) const = 0;

	virtual ~Obstacle() = default;
};

