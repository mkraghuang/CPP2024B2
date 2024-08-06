#include <iostream>
#include "Department.h"


Department::Department()
{
	name = "";
	strength = 0;
	major = "";
}


Department::Department(string n, int s, string m)
{
	name = n;
	strength = s;
	major = m;
}

void Department::displaydeptdetails()
{
	cout << "Name:" << name << "\tstrength"<< strength << "\tmajor:" << major << endl;

}

void Department::updatestrength(int newstrength)
{
	strength = newstrength;
}
