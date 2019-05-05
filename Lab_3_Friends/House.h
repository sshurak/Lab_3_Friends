#pragma once
#include <iostream>
#include <string>
#include "Person.h"

class Person;

class House
{
private:
	std::string street;
	int number;
	friend Person;
public:
	House()
	{
		street = "1st Street";
		number = 1;
	}
};