#include "Chassis.h"
#include "../RobotMap.h"

#include "../Commands/DriveWithJoystick.h"

Chassis::Chassis() : Subsystem("ExampleSubsystem") {
	//this is the Chassis Constructor
//	m_leftDriveMotor = new Talon(DRIVEMOTORLEFT);
//	m_rightDriveMotor = new Talon(DRIVEMOTORRIGHT);

	WPI_TalonSRX * _rghtFront = new WPI_TalonSRX(1);
	WPI_TalonSRX * _leftFront = new WPI_TalonSRX(2);

	DifferentialDrive * _diffDrive = new DifferentialDrive(*_leftFront,	*_rghtFront);

		bDriveState=false;
}

void Chassis::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	 SetDefaultCommand(new DriveWithJoystick());
}

// Put methods for controlling this subsystem
// Put methods for controlling this subsystem
// here. Call these from Commands.

void Chassis::driveWithJoystick(Joystick *stickL) {  //, Joystick *stickR) {
	//Purpose:
		//Using the driver station joysticks to drive the robot.
	//Inputs:   Are Instances of the Joystick class.

	//true precision drive
	//false standard drive

		//robotDrive->TankDrive(stickL, stickR,  bDriveState);
//robotDrive->ArcadeDrive(stickL->GetYChannel(),stickL->GetXChannel(), bDriveState);



	_diffDrive->ArcadeDrive(stickL->GetY(), stickL->GetX());

//		driverStationLCDSystem->PrintfLine(DriverStationLCD::kUser_Line1, "Precision Drive:", DriveState);
//		driverStationLCDSystem->UpdateLCD();
}

void Chassis::autoDriveSystem(float left, float right) {
	// Purpose:
		//To drive the Robot in autounomous mode.
	//Inputs: left,right - takes a floating point value from -1 to 1, with 1 indicating full speed and .5 half speed.
	//robotDrive->TankDrive(left, right);
}


void Chassis::ToggleDrive(){
	bDriveState = !bDriveState;
	//true precision drive
	//false standard drive
}
void Chassis::StopEverything(){
	_leftFront->Set(0);
	_rghtFront->Set(0);
}

