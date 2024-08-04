#include "File2.h"
#include <iostream>
using namespace std;

/*File2::File2(std::string branch, int netbooks, int deletedbooks, int readers, int consultency, int issue)
    : ProgramTwo(branch, netbooks, deletedbooks), m_readers(readers), m_consultency(consultency), m_issue(issue)
{
    cout << "Class Record constructor call:" << endl;
}*/

void File2::displayrecord()
{
    cout << "BRANCH NAME = " << ProgramTwo::m_branch << endl;
    cout << "GRASS BOOKS = " << ProgramTwo::m_grassBooks << endl;
    cout << "NUM OF READERS = " << m_readers << endl;
    cout << "NUM OF CONSULTANCY = " << m_consultency << endl;
    cout << "NUM OF ISSUES = " << m_issue << endl;
}

File2::~File2()
{
    cout << "File2 destructor call:" << endl;
}
