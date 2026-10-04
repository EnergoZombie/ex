#pragma once
#include "Obstacle.h"
#include <string>
#include <iostream>
using namespace std;

class Wall :
    public Obstacle
{
    int height;
public:
    Wall(const string& n, int h);

    bool Overcome(Participant& p) const;
    
    ~Wall() = default;
};

