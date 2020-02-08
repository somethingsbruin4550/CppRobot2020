#include "CCSparkMax.h"

CCSparkMax::CCSparkMax(int deviceID, rev::CANSparkMax::MotorType motorType, rev::CANSparkMax::IdleMode idleMode, bool reverse)
{
    max = new rev::CANSparkMax(deviceID, motorType);
    max->SetInverted(reverse);

    pidController = new rev::CANPIDController(*max);

    encoder = new rev::CANEncoder(max->GetEncoder());
}

CCSparkMax::~CCSparkMax()
{
    delete max;
    delete pidController;
    delete encoder;
}

void CCSparkMax::set(double spd)
{
    max->Set(spd);
}

void CCSparkMax::disable()
{
    max->Disable();
}

void CCSparkMax::setPosition(double pos)
{
    encoder->SetPosition(pos);
}

void CCSparkMax::setDistance(double pos)
{
    pidController->SetReference(pos, rev::ControlType::kPosition);
}

void CCSparkMax::setVelocity(double vel)
{
    pidController->SetReference(vel, rev::ControlType::kVelocity);
}

double CCSparkMax::getEncoder()
{
    return encoder->GetPosition();
}


