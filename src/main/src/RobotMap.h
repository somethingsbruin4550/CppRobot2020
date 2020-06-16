#pragma once


//Comment this out if the code is being run on the practice robot
#define PRACTICE_ROBOT

#ifdef PRACTICE_ROBOT
//If code is running on the practice robot, use:

#define NUM_JOYSTICKS 1

//Wheel CAN Ports
#define FORWARD_LEFT 1
#define FL_REVERSE false
#define BACK_LEFT 2
#define BL_REVERSE false
#define FORWARD_RIGHT 3
#define FR_REVERSE false
#define BACK_RIGHT 4
#define BR_REVERSE false

#else
//If code is running on the competition robot, use:

#define NUM_JOYSTICKS 1

//Wheel CAN Ports
#define FORWARD_LEFT 1
#define FL_REVERSE false
#define BACK_LEFT 2
#define BL_REVERSE false
#define FORWARD_RIGHT 3
#define FR_REVERSE false
#define BACK_RIGHT 4
#define BR_REVERSE false

#endif