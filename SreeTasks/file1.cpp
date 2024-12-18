#pragma once
#include "programTwo.h"
#include <iostream>

class File1 : public ProgramTwo
{
public:
    int m_netmemberships;
    int m_deletedmembers;
    int m_grassmembers;

public:
    File1(std::string branch, int netbooks, int deletedbooks, int netmemberships, int deletedmembers)
        : ProgramTwo(branch, netbooks, deletedbooks), m_netmemberships(netmemberships), m_deletedmembers(deletedmembers), m_grassmembers(0) {}

    int getTotalMemberships()
    {
        m_grassmembers = m_netmemberships - m_deletedmembers;
        return m_grassmembers;
    }

    void setLibrarydetails()
    {
        std::cout << "BRANCH NAME = " << m_branch << std::endl;
        std::cout << "NET BOOKS = " << m_netBooks << std::endl;
        std::cout << "DELETED BOOKS = " << m_deletedBooks << std::endl;
        std::cout << "GRASS BOOKS = " << m_grassBooks << std::endl;
        std::cout << "NET MEMBERSHIPS = " << m_netmemberships << std::endl;
        std::cout << "DELETED MEMBERS = " << m_deletedmembers << std::endl;
        std::cout << "GRASS MEMBERSHIPS = " << m_grassmembers << std::endl;
    }

    ~File1()
    {
        std::cout << "Destructor call derived class" << std::endl;
    }
};
