#pragma once
#include <iostream>
#include <string>
using namespace std;

class Department
{
	string name;
	int strength;
	string major;

public:
	Department();
	Department(string n, int s, string major);

	void displaydeptdetails();
	void updatestrength(int newstrength);
};

