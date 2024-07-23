#include "Department.h"

Department::Department()
{
	cout << "Department default" << endl;
	name = "";
	strength = 0;
	major = "";
}

Department::Department(string n, int s, string m)
{
	cout << "Department parameterized" << endl;
	name = n;
	strength = s;
	major = m;
}

Department::Department(const Department& src)
{
	cout << "Department copy" << endl;
	name = src.name;
	strength = src.strength;
	major = src.major;
}

void Department::displaydeptdetails()
{
	cout << "Name=" << name << "\tstrength=" << strength << "\tmajor=" << major << endl;
}

void Department::updatestrength(int newstrength)
{
	strength = newstrength;
}

void Department::updatename(string n)
{
	name = n;
}
