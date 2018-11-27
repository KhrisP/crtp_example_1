/*
 * interface.h
 *
 *  Created on: 26 nov. 2018
 *      Author: khrisp
 */

#ifndef MOTOR_H_
#define MOTOR_H_


class motor
{
public:
	virtual ~motor(){}
	virtual void start() = 0;
	virtual void stop() = 0;
};


#endif /* MOTOR_H_ */
