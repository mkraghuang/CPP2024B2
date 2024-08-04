#include "programTwo.h"
#include<iostream>
using namespace std;

ProgramTwo::ProgramTwo(std::string branch, int netbooks, int deletedbooks)
{
	m_branch = branch;
	m_netBooks = netbooks;
	m_deletedBooks = deletedbooks;
	m_grassBooks = 0;

}

int ProgramTwo::getTotalBooks()
{
	m_grassBooks = m_netBooks - m_deletedBooks;

	return m_grassBooks;
	
}

void ProgramTwo::setdetails()
{
	cout << "LIBRARY DETAILS:" << endl;
}

ProgramTwo::~ProgramTwo()
{
	cout << "destructor call base class" << endl;
}
