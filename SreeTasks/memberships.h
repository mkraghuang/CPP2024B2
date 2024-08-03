#pragma once
#include "Library.h"
#include<iostream>
using namespace std;

class Memberships : public Library {
public:
    int m_netmemberships;
    int m_deletedmembers;
    int m_grassmembers;

    Memberships(std::string branch, int netbooks, int deletedbooks, int netmemberships, int deletedmembers) :
        Library(branch, netbooks, deletedbooks), m_netmemberships(netmemberships), m_deletedmembers(deletedmembers), m_grassmembers(0) {}

    int getTotalMemberships() {
        m_grassmembers = m_netmemberships - m_deletedmembers;
        return m_grassmembers;
    }

    void setLibraryDetails() {
        void setDetails(); // This calls the setDetails method of the base class
        std::cout << "MEMBERSHIP DETAILS:" << std::endl;
        std::cout << "NET MEMBERSHIPS: " << m_netmemberships << std::endl;
        std::cout << "DELETED MEMBERS: " << m_deletedmembers << std::endl;
        std::cout << "GROSS MEMBERSHIPS: " << m_grassmembers << std::endl;
    }

    ~Memberships() {
        std::cout << "Destructor called for Memberships class" << std::endl;
    }
};
