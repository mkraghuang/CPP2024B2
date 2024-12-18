#include "Members.h"

int Members::getTotalMemberships()
{
    m_grassmembers = m_netmemberships - m_deletedmembers;

    return m_grassmembers;
    
}

void Members::setLibrarydetails()
{
    cout << "BRANCH NAME=" << m_branch << endl;
    cout << "NET BOOKS=" << m_netBooks << endl;
    //cout<<"BRANCH NAME="<<m_branch<<endl;
    cout << "DELETED BOOKS =" << m_deletedBooks << endl;
    cout << "GRASS BOOKS =" << m_grassBooks << endl;
    cout << "NETMEMBERSHIPS=" << m_netmemberships << endl;
    cout << "DELETED MEMBERS=" << m_deletedmembers << endl;
    cout << "GRASSMEMBERSHIPS=" << m_grassmembers << endl;
}

Members::~Members()
{
    cout << "destructor call dirived class :" << endl;
}
