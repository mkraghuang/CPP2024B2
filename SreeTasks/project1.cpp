#include "project1.h"
#include <iostream>
using namespace std;


Project1::Project1(std::string branch, int netbooks, int deletedbooks)
{
	m_branch = branch;
	m_netBooks = netbooks;
	m_deletedBooks = deletedbooks;
	m_grassBooks = 0;
}

int Project1::getTotalBooks()
{
	m_grassBooks = m_netBooks - m_deletedBooks;

	return m_grassBooks;
}

void Project1::setdetails()
{
	cout << "LIBRARY DETAILS:" << endl;

	cout << "BRANCH NAME=" << m_branch << endl;
	cout << "NET BOOKS=" << m_netBooks << endl;
	cout << "DELETED BOOKS =" << m_deletedBooks << endl;
	cout << "GRASS BOOKS =" << m_grassBooks << endl;

}

Project1::~Project1()
{
	cout << "destructor call base class" << endl;
}
