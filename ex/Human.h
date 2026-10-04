#pragma once
#include "Participant.h"

class Human :
    public Participant
{
    int stamina = 0;
public:
    Human(const string& n, int jh, int rd, int s);

    int GetStamina() const;

    void SetStamine(int s);

    bool Jump(int h);
    bool Run(int r);

    ~Human() = default;
};

