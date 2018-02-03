#ifndef Chassis_H
#define Chassis_H

#include <Commands/Subsystem.h>
#include "WPILib.h"

#include "ctre/Phoenix.h"

class Chassis : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

public:
	Chassis();
	void InitDefaultCommand();
	void autoDriveSystem(float, float);
	void driveWithJoystick(Joystick *stickL);//, Joystick *stickR);
	//void precisionDriveSystem(Joystick *stickL, Joystick *stickR);
	void ToggleDrive();
	void StopEverything();

private:

	WPI_TalonSRX * _rghtFront;
	WPI_TalonSRX * _leftFront;

	DifferentialDrive * _diffDrive;


//	RobotDrive *robotDrive;
//	Talon *m_leftDriveMotor,*m_rightDriveMotor;
	//frc::Talon m_leftDriveMotor{0};
	//frc::Talon m_rightDriveMotor{1};
	bool bDriveState;
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

};

#endif  // Chassis_H
