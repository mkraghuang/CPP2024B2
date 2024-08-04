#include "LibraryPro.h"
#include <iostream>
using namespace std;

LibraryPro::LibraryPro(std::string branch, int netbooks, int deletedbooks)
{
	m_branch = branch;
	m_netBooks = netbooks;
	m_deletedBooks = deletedbooks;
	m_grassBooks = 0;
}

int LibraryPro::getTotalBooks()
{
	m_grassBooks = m_netBooks - m_deletedBooks;

	return m_grassBooks;
}

void LibraryPro::setdetails()
{
	cout << "LIBRARY DETAILS:" << endl;
}

LibraryPro::~LibraryPro()
{
	cout << "destructor call base class" << endl;
}
