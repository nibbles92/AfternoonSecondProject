/*
 * AfternoonController.cpp
 *
 *  Created on: Jan 19, 2016
 *      Author: droc6148
 */

#include "AfternoonController.h"
#include <iostream>
using namespace std;

AfternoonController :: AfternoonController()
{
	this->classCount = 21;
}

void AfternoonController :: setClassCount(int classCount)
{
	this->classCount = classCount;
}

int AfternoonController :: getClassCount()
{
	return this->classCount;
}

void AfternoonController :: start()
{
	cout << "Welcome to my second C++ class this week" << endl;
	cout << "the current value of classCount is " << getClassCount() << endl;
	int newCount;
	cout << "Choose a new number for class" << endl;
	cin >> newCount;
	this->setClassCount(newCount);
	cout << "the current value of classCount is " << getClassCount() << endl;

}
