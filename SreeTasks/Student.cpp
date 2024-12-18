#include "Student.h"
#include<iostream>
using namespace std;

int Student::studentCount = 0;
int Student::teacherCount = 4;


Student::Student(int id, int age, std::string name)
{

	this->id = id;
	this->age = age;
	this->name = name;
	studentCount = studentCount + 1;
}

void Student::printstudentDetails()
{
	std::cout << "STUDENT ID=" << id <<std:: endl;
	std::cout << "STUDENT AGE=" << age << std::endl;

	std::cout << "STUDENT NAME=" << name << std::endl;

}

void Student::getMealsCount()
{
	std::cout << "TOTAL MEAL COUNT=" << studentCount + teacherCount << endl;
}
