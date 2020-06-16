#pragma once

#include <vector>

#include <frc/Joystick.h>

#include "RobotMap.h"
#include "ControlMap.h"
#include "Util.h"

class OI
{
public:
    static void initJoysticks();
    
    static bool getButtonPressed(int controllerNumber, int buttonID);
    static double getAxisPosition(int controllerNumber, int axisID);
private:
    static std::vector<frc::Joystick> m_Joysticks;
};