#pragma once
#include "Obstacle.h"
#include <string>
#include <iostream>
using namespace std;

class Treadmill :
    public Obstacle
{
    int length;
public:
    Treadmill(const string& n, int l);

    bool Overcome(Participant& p) const;

    ~Treadmill() = default;
};

