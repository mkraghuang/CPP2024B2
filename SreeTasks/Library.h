#pragma once
#include<string>
class Library
{
   std:: string m_branch;
    int m_netBooks;
    int m_deletedBooks;
    int m_grassBooks;

public:
    Library(std::string branch, int netbooks, int deletedbooks)
        : m_branch(branch), m_netBooks(netbooks), m_deletedBooks(deletedbooks), m_grassBooks(0) {}

    int getTotalBooks();

    void setDetails();
    ~Library();
};

