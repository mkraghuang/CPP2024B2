#include "Library.h"
#include<iostream>
using namespace std;

Library::Library(std::string branch, int netbooks, int deletedbooks)
{
	m_branch = branch;
	m_netBooks = netbooks;
	m_deletedBooks = deletedbooks;
	m_grassBooks = 0;

}

int Library::getTotalBooks()
{
	m_grassBooks = m_netBooks - m_deletedBooks;

	return m_grassBooks;
	
}

void Library::setdetails()
{
	cout << "LIBRARY DETAILS:" << endl;

}

Library::~Library()
{
	cout << "destructor call base class" << endl;
}
