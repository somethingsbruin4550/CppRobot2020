#pragma once

#include "CCSparkMax.h"

class Chassis
{
private:
    CCSparkMax* fl;
    CCSparkMax* fb;
    CCSparkMax* bl;
    CCSparkMax* br;
public:
    Chassis();
};