#pragma once
#include<iostream>
#include"programTwo.h"
class File2:public ProgramTwo
{
public:
public:

    int m_readers;
    int m_consultency;
    int m_issue;

public:

    File2(std::string branch, int netbooks, int deletedbooks, int readers, int consultency, int issue) :ProgramTwo(branch, netbooks, deletedbooks),
        m_readers(readers), m_consultency(consultency), m_issue(issue)
        
        {
           std:: cout << "Class Record constructor call:" <<std:: endl;
        }


   // File2(std::string branch, int netbooks, int deletedbooks, int readers, int consultency, int issue);

    void displayrecord();
    ~File2();

};

