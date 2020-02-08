#include "Chassis.h"
#include "RobotMap.h"


Chassis::Chassis()
{
    CCSparkMax* fl = new CCSparkMax(RobotMap::FORWARD_LEFT, rev::CANSparkMax::MotorType::kBrushless, rev::CANSparkMax::IdleMode::kBrake, false);
    CCSparkMax* fr = new CCSparkMax(RobotMap::FORWARD_RIGHT, rev::CANSparkMax::MotorType::kBrushless, rev::CANSparkMax::IdleMode::kBrake, false);
    CCSparkMax* bl = new CCSparkMax(RobotMap::BACK_LEFT, rev::CANSparkMax::MotorType::kBrushless, rev::CANSparkMax::IdleMode::kBrake, false);
    CCSparkMax* br = new CCSparkMax(RobotMap::BACK_RIGHT, rev::CANSparkMax::MotorType::kBrushless, rev::CANSparkMax::IdleMode::kBrake, false);

}


