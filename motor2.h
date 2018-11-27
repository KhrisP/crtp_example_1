/*
 * motor2.h
 *
 *  Created on: 26 nov. 2018
 *      Author: khrisp
 */

#ifndef MOTOR2_H_
#define MOTOR2_H_

#include "motor.h"

class motor_2: public motor {
public:
	motor_2();
	virtual ~motor_2();

	virtual void start() override;
	virtual void stop() override;

};

#endif /* MOTOR2_H_ */
