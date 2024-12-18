#include "Records.h"


void Records::displayrecord()
{
    cout << "NETMEMBERSHIPS=" << Members::m_netmemberships << endl;
    cout << "DELETEDMEMBRS =" << Members::m_deletedmembers << endl;
    cout << "NUM OF READES=" << m_readers << endl;
    cout << "NUM OF CONSULENCE=" << m_consultency << endl;
    cout << "NUM OF ISSUE=" << m_issue << endl;
}

Records::~Records()
{
    cout << "Record destructor call :" << endl;
}
