#include<iostream>
#include<string>
#include "Employee.h"

Employee::Employee()
{
	cout << "employee default" << endl;
	number = 1;
	ename = "TEST";
	salary = 50000;
	division = "IT";
}

Employee::Employee(int num, string name, long sal, string div)
{
	cout << "employee parameterized" << endl;
	number = num;
	ename = name;
	salary = sal;
	division = div;
}

Employee::Employee(const Employee& src)
{
	cout << "employee copy" << endl;
	number = src.number;
	ename = src.ename;
	salary = src.salary;
	division = src.division;
}

void Employee::displayEmployee()
{
	cout << "NUMBER=" << number << "\tENAME=" << ename << "\tSALARY=" << salary << "\tDIVISION=" << division << endl;
}

long Employee::Getsalary()
{
	return salary;
}

void Employee::Setsalary(long num)
{
	salary = num;
}string Employee::Getname()
{
	return ename;
}

void Employee::Setname(string temp)
{
	ename = temp;
}


