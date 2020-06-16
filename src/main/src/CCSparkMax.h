#pragma once

#include <rev/CANSparkMax.h>
#include <rev/CANPIDController.h>
#include <rev/CANEncoder.h>
#include <rev/CANError>
#include <rev/ControlType>
#include <rev/EncoderType>

/**
 * Compacts all methods needed to control a SparkMax into one class
 */
class CCSparkMax : public CANSparkMax
{
public:
    CCSparkMax(int canPort, rev::MotorType controlMode);
private:
    rev::CANPIDController pidController;
    rev::CANEncoder encoder;
};