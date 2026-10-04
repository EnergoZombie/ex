#pragma once
#include <string>
#include <iostream>
using namespace std;

class Participant
{
protected:
	string name;
	int jumpHeight = 0;
	int runDistance = 0;
public:
	Participant(const string& n, int jh, int rd);

	string GetName() const;
	int GetJumpHeight() const;
	int GetRunDistance() const;

	void SetName(const string& n);
	void SetJumpHeight(int jh);
	void SetRunDistance(int rd);

	virtual bool Jump(int h) = 0;
	virtual bool Run(int r) = 0;

	virtual ~Participant() = default;
};

