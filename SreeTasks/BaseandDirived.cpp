// BaseandDirived.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Student
{
public:
    string m_name;
    int m_id;
    int m_rollno;

    Student(string name, int id, int rollno) : m_name(name), m_id(id), m_rollno(rollno)
    {
        cout << "Parent class:" << endl;
        cout << "Parameterized constructor:" << endl;
        cout << "Student name: " << m_name << endl;
        cout << "Student id: " << m_id << endl;
        cout << "Student rollno: " << m_rollno << endl;
    }
};

class Address : public Student
{
public:
    int m_houseno;
    long m_phoneno;
    string m_cityname;
    string m_street;
    string m_state;

    Address(string name, int id, int rollno, int houseno, long phoneno, string cityname, string street, string state)
        : Student(name, id, rollno), m_houseno(houseno), m_phoneno(phoneno), m_cityname(cityname), m_street(street), m_state(state)
    {
        cout << "Address details:" << endl;
        cout << "House no: " << m_houseno << endl;
        cout << "Phone no: " << m_phoneno << endl;
        cout << "City name: " << m_cityname << endl;
        cout << "Street: " << m_street << endl;
        cout << "State: " << m_state << endl;
    }
};

int main()
{
    Address stu("KEERTHI SREE", 1001, 46, 123, 8500350146, "ELURU", "ONETAWN", "ANDRAPRADESH");
    return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
