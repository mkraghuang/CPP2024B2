#pragma once
class Memberships
{
public:
public:
    int m_netMemberships;
    int m_deletedMembers;
    int m_grassMembers;

    Memberships(int netMemberships, int deletedMembers)
        : m_netMemberships(netMemberships), m_deletedMembers(deletedMembers), m_grassMembers(0){}
    
    int getTotalMemberships();

    void setLibraryDetails();
    ~Memberships();
};

