#pragma once
#include<iostream>
#include <string>
class Project1
{
public:
	std::string m_branch;
	int m_netBooks;
	int m_deletedBooks;
	int m_grassBooks;

	Project1(std::string branch, int netbooks, int deletedbooks);

	int getTotalBooks();

	void setdetails();
	~Project1();
	
};

