/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */

// For example to map the left and right motors, you could define the
// following variables to use with your drivetrain subsystem.
// constexpr int kLeftMotor = 1;
// constexpr int kRightMotor = 2;

// If you are using multiple modules, make sure to define both the port
// number and the module. For example you with a rangefinder:
// constexpr int kRangeFinderPort = 1;
// constexpr int kRangeFinderModule = 1;


#define JOYSTICKRIGHT 	(2)
#define JOYSTICKLEFT  	(1)

//######### Joystick Buttons  #########
//#define TRIGGER (1)

typedef enum{
	TRIGGER = 1, // Button Number 1
	THUMB_BUTTON_DOWN, // Button Number 2
	THUMB_BUTTON_UP,//button 3
	THUMB_BUTTON_LEFT,//button 4
	THUMB_BUTTON_RIGHT, // Button Number 5
	LEFT_SIDE_UP,//button6
	LEFT_SIDE_DOWN,//button 7
	FRONT_SIDE_LEFT,// 8
	FRONT_SIDE_RIGHT,//9
	RIGHT_SIDE_DOWN, // Button Number 10
	RIGHT_SIDE_UP,
	NUM_OF_JOYSTICK_BUTTONS
} JOYSTICE_BUTTONS_T;

typedef enum{
	SOLENOID_1 = 1,
	SOLENOID_2,
	SOLENOID_3,
	SOLENOID_4,
	SOLENOID_5,
	SOLENOID_6,
	SOLENOID_7,
	SOLENOID_8,
}SOLENOID_t;



typedef enum{
	RELAY_1 = 1,
	RELAY_2,
	RELAY_3,
	RELAY_4,
	RELAY_5,
	RELAY_6,
	RELAY_7,
	RELAY_8,
}RELAY_t;

typedef enum{

	DIO1 = 1,
	DIO2,
	DIO3,
	DIO4,
	DIO5,
	DIO6,
	DIO7,
	DIO8,
	DIO9,
	DIO10,
	DIO11,
	DIO12,
	DIO13,
	DIO14
}DIGITAL_IO_T;


//######### Motors #########
//#define DRIVEMOTORRIGHT (2)
//#define DRIVEMOTORLEFT  (1)
//#define WINCHMOTOR		(4)
//#define FEEDERMOTOR 	(3)

typedef enum{
	PWM_1 = 1,
	PWM_2,
	DRIVEMOTORLEFT,
	DRIVEMOTORRIGHT,
	PWM_5,
	PWM_6

}PWM_CHANNELS_t;
