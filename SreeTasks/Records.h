#pragma once
#include "Members.h"
class Records :public Members
{
public:

    int m_readers;
    int m_consultency;
    int m_issue;
    Records(string branch, int netbooks, int deletedbooks, int netmemberships, int deletedmembers, int readers, int consultency, int issue) :
        Members(branch, netbooks, deletedbooks, netmemberships, deletedmembers),
        m_readers(readers), m_consultency(consultency), m_issue(issue) {

        cout << "class Record consturctor call :" << endl;
    
    }
    void displayrecord();

    ~Records();

};

