#pragma once
#include "Participant.h"

class Cat :
    public Participant
{
    int lives = 0;
public:
    Cat(const string& n, int jh, int rd, int l);

    int GetLives() const;

    void SetLives(int l);

    bool Jump(int h);
    bool Run(int r);

    ~Cat() = default;
};

