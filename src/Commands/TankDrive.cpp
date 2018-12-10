/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/
#include "WPILib.H"
#include "TankDrive.h"
#include "../Robot.h"
#include "../OI.h"

TankDrive::TankDrive() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Robot::m_drivetrain);
}


// Called just before this Command runs the first time
void TankDrive::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void TankDrive::Execute() {
	/*double leftPower = Robot::m_oi ->getjoyStickLeft()-> GetY();
	double rightPower = Robot::m_oi ->getjoyStickRight()-> GetY();


	Robot::m_drivetrain ->tankDrive(leftPower,rightPower);*/
	Robot::m_drivetrain-> tankDrive("W",Robot::m_oi-> getjoyStickLeft()->GetY(),Robot::m_oi -> getjoyStickRight()->GetY());
	//call tankdrive method here. Ex. Robot::drive->tankDrive()
	//when calling methods from oi, do oi::methodName()

}

// Make this return true when this Command no longer needs to run execute()
bool TankDrive::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void TankDrive::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TankDrive::Interrupted() {

}
