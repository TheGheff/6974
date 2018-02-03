/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/
#include <Joystick.h>
#pragma once

class OI {
public:
	OI();
	frc::Joystick& GetJoystick();

private:
	frc::Joystick m_joy{0};

	// Create some buttons
//	JoystickButton m_dUp{&m_joy, 5};
//	JoystickButton m_dRight{&m_joy, 6};
//	JoystickButton m_dDown{&m_joy, 7};
//	JoystickButton m_dLeft{&m_joy, 8};
//	JoystickButton m_l2{&m_joy, 9};
//	JoystickButton m_r2{&m_joy, 10};
//	JoystickButton m_l1{&m_joy, 11};
//	JoystickButton m_r1{&m_joy, 12};
};
