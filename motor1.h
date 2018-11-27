/*
 * motor1.h
 *
 *  Created on: 26 nov. 2018
 *      Author: khrisp
 */

#ifndef MOTOR1_H_
#define MOTOR1_H_

#include "motor.h"

class motor_1: public motor {
public:
	motor_1();
	virtual ~motor_1();

	virtual void start() override;
	virtual void stop() override;
};

#endif /* MOTOR1_H_ */
