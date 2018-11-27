//============================================================================
// Name        : CRTP.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "motoruser.h"
#include "motor1.h"
#include "motor2.h"

#include <iostream>
using namespace std;

int main()
{
	motor_1 m1;
	motor_2 m2;
	motor_user user(m1);

	cout << "Application start \n";

	user.run();
	user.change_motor(m2);
	user.run();

	cout << "Application end\n";

	return 0;
}
