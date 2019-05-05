#include <iostream>
#include <string>
#include "Person.h"
#include "House.h"

using namespace std;


int main()
{
	Person First("Ivanov", 20);
	First.Settle("Lenin's Street", 34);
	First.Out();
	system("pause");
	return 0;
}