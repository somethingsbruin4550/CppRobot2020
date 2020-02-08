#pragma once

#include <rev/CANSparkMax.h>
#include <rev/CANPIDController.h>
#include <rev/CANEncoder.h>
#include <rev/ControlType.h>

class CCSparkMax
{
private:
    rev::CANSparkMax* max;
    rev::CANPIDController* pidController;
    rev::CANEncoder* encoder;
public:
    CCSparkMax(int deviceID, rev::CANSparkMax::MotorType motorType, rev::CANSparkMax::IdleMode idleMode, bool reverse);
    ~CCSparkMax();

    void set(double spd);
    void disable();
    void setPosition(double pos);
    void setDistance(double dist);
    void setVelocity(double vel);
    double getEncoder();
    void setPID(double Kp, double Ki, double Kd, double Ff);
};