#pragma once
#include<iostream>
using namespace std;
class Employee
{
	int number;
	string ename;
	long salary;
	string division;
public:
	Employee();
	Employee(int num, string name, long sal, string div);
	Employee(const Employee& src);
	void displayEmployee();
	long Getsalary();
	void Setsalary(long num);
	string Getname();
	void Setname(string temp);

};

