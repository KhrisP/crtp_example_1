/*
 * motoruser.h
 *
 *  Created on: 26 nov. 2018
 *      Author: khrisp
 */

#ifndef MOTORUSER_H_
#define MOTORUSER_H_

#include "motor.h"

class motor_user
{
public:
	motor_user(motor &a_motor);
	virtual ~motor_user();

	void run();
	void change_motor(motor &a_motor);

private :
	motor *m_motor;
};

#endif /* MOTORUSER_H_ */
