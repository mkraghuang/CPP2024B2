#pragma once
#include<string>
class ProgramTwo
{
public:
	
	std::string m_branch;
	int m_netBooks;
	int m_deletedBooks;
	int m_grassBooks;

	ProgramTwo(std::string branch, int netbooks, int deletedbooks);
	int getTotalBooks();
	void setdetails();

	~ProgramTwo();
};

