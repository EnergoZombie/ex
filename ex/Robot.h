#pragma once
#include "Participant.h"

class Robot :
    public Participant
{
    int jumpAdaptation = 0;
    int runAdaptation = 0;
public:
    Robot();
    Robot(const string& n, int jh, int rd);

    int GetJumpAdaptation() const;
    int GetRunAdaptation() const;

    bool Jump(int h);
    bool Run(int r);

    ~Robot() = default;
};

