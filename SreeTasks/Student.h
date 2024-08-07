#pragma once
#include<string>
class Student
{
public:
	int id;
	int age;
	std::string name;

	static int studentCount;
	static int teacherCount;

public:
	Student(int id, int age, std::string name);
	void printstudentDetails();

	static void getMealsCount();
};
//int Student::teacherCount = 4;

