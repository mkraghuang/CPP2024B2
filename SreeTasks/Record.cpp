#include "Record.h"
#include<iostream>


void Record::displayRecord()
{
   std:: cout << "NUM OF READERS = " << m_readers << std::endl;
   std:: cout << "NUM OF CONSULTANCY = " << m_consultancy << std::endl;
   std:: cout << "NUM OF ISSUE = " << m_issue <<std:: endl;
}

Record::~Record()
{
	std::cout << "Record destructor called:" <<std:: endl;
}


