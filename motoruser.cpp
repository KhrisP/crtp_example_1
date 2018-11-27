/*
 * motoruser.cpp
 *
 *  Created on: 26 nov. 2018
 *      Author: khrisp
 */

#include "motoruser.h"

motor_user::motor_user(motor &a_motor) :
	m_motor(&a_motor)
{
}

motor_user::~motor_user()
{
}

void motor_user::run()
{
	m_motor->start();
	m_motor->stop();
}

void motor_user::change_motor(motor &a_motor)
{
	m_motor = &a_motor;
}
