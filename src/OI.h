/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/
#include <WPILib.h>
#pragma once

class OI {
private:
	Joystick* joyLeft;
	Joystick* joyRight;
	Joystick* joyArm;

public:
	Joystick* getjoyStickLeft();
	Joystick* getjoyStickRight();
	Joystick* getjoyStickArm();
	OI();
};
