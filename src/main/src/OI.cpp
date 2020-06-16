#include <OI.h>

void OI::initJoysticks()
{
    for(int i = 0; i < NUM_JOYSTICKS; i++)
    {
        m_Joysticks.emplace_back(i);
    }
}

bool OI::getButtonPressed(int controllerNumber, int buttonID)
{
    return m_Joysticks[controllerNumber].getRawButton(buttonID);
}

double OI::getAxisPosition(int controllerNumber, int axisID)
{
    return m_Joysticks[controllerNumber].getRawAxis(axisID);
}