#include "Library.h"
#include<iostream>
#include"string"

int Library::getTotalBooks()
{
    m_grassBooks = m_netBooks - m_deletedBooks;
    return m_grassBooks;
    
}

void Library::setDetails()
{
   std:: cout << "LIBRARY DETAILS:" << std::endl;
  std::  cout << "BRANCH NAME = " << m_branch <<std:: endl;
   std:: cout << "NET BOOKS = " << m_netBooks <<std:: endl;
   std:: cout << "DELETED BOOKS = " << m_deletedBooks <<std:: endl;
   std:: cout << "GRASS BOOKS = " << m_grassBooks <<std:: endl;
}

Library::~Library()
{
   std:: cout << "Destructor called for Library" <<std:: endl;
}
