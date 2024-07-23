#pragma once

#include <iostream>
#include <string>
using namespace std;

/*
* 
* int a = 34;
* int b = a;
* 
* Department dept("h",78,"P"); // parameterrized cnstrctr
* Department dept1 = dept; // copy-constrctr => Department dept1 = Department(dept);
* dept1=dept; // overload assignment operator
*/
class Department
{
	string name;
	int strength;
	string major;

public:
	Department();
	Department(string n, int s, string major);
	Department(const Department& src);
	void displaydeptdetails();
	void updatestrength(int newstrength);
	void updatename(string n);
};

