#pragma once
#include <iostream>
#include <string>
#include "House.h"

class Person
{
private:
	std::string name;
	int age;
	House Flat;
public:
	Person(std::string s_name, int s_age)
	{
		name = s_name;
		age = s_age;
	}
	void Out()
	{
		std::cout << name << "\t" << age << "\t" << Flat.street << "\t" << Flat.number << std::endl;
	}
	void Settle(std::string s_street, int s_number)
	{
		Flat.street = s_street;
		Flat.number = s_number;
	}

};
