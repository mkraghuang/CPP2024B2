#pragma once
#include "LibraryPro.h"
#include <string>
#include<iostream>
using namespace std;
class Members:public LibraryPro
{
public:

    int m_netmemberships;
    int m_deletedmembers;
    int m_grassmembers;
public:

    Members(std::string branch, int netbooks, int deletedbooks, int netmemberships, int deletedmembers) :
        LibraryPro(branch, netbooks, deletedbooks), m_netmemberships(netmemberships), m_deletedmembers(deletedmembers), m_grassmembers(0){
        cout << "library memberships :" << endl;
    }
    int getTotalMemberships();

    void setLibrarydetails();

    ~Members();
};

