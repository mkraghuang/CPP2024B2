#pragma once
#include <string>
class LibraryPro
{
public:
	// Private:
	std::string m_branch;
	int m_netBooks;
	int m_deletedBooks;
	int m_grassBooks;

public:

	LibraryPro(std::string branch, int netbooks, int deletedbooks);
	int getTotalBooks();
	void setdetails();
	~LibraryPro();
};

