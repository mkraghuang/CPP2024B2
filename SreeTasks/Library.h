#pragma once
#include <string>
class Library
{
public:
	std::string m_branch;
	int m_netBooks;
	int m_deletedBooks;
	int m_grassBooks;

	Library(std::string branch, int netbooks, int deletedbooks);

	int getTotalBooks();

	void setdetails();
	~Library();
};

