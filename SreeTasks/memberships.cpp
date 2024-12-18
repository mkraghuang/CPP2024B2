#include "Memberships.h"
#include<iostream>

int Memberships::getTotalMemberships()
{
    m_grassMembers = m_netMemberships - m_deletedMembers;
    return m_grassMembers;
}

void Memberships::setLibraryDetails()
{
   std:: cout << "NET MEMBERSHIPS = " << m_netMemberships << std::endl;
   std:: cout << "DELETED MEMBERS = " << m_deletedMembers <<std:: endl;
  std::  cout << "GRASS MEMBERSHIPS = " << m_grassMembers <<std:: endl;
   
}

Memberships::~Memberships()

{
   std:: cout << "Destructor called for Memberships" <<std:: endl;
}
