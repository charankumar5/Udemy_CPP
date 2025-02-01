/*
 * addNumbers.cpp
 *
 *  Created on: 29 Jan 2025
 *      Author: charan
 */

#include "addNumbers.h"

addNumbers::addNumbers(int value1, int value2) {
	this ->firstNumber = value1;
	this ->secondNumber = value2;
}

int addNumbers::add() {

	int sum = firstNumber + secondNumber;
	return sum;
}
