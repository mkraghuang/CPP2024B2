#pragma once
class Record
{
public:
    int m_readers;
    int m_consultancy;
    int m_issue;

    Record(int readers, int consultancy, int issue)
        : m_readers(readers), m_consultancy(consultancy), m_issue(issue){}

    void displayRecord();
    ~Record();
};

