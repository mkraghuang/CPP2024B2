// ProjectMy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
class employee
{
    int id;
    string name;
    float salary;
    bool isIt;
public:
    employee(int id, string name, float salary, bool isIt)
    {
        this->id = id;
        this-> name = name;
        this->salary = salary;
        this->isIt = isIt;
    }
    float getsalary()
    {
        return salary;
    }
    void setsalary(float newsalary)
    {
        salary = newsalary;
    }
    void displayDetails()
    {
        cout << "EMPLOYEE ID:" << endl;
        cout << "EMPLOYEE NAME:" << endl;
        cout << "EMPLOYEE SALARY:" << endl;
        cout << "EMPLOYEE ISIT OR NOT:" << (isIt ? "yes" : "no") << endl;
    }
};

int main()
{
    employee emp(1001, "sri", 4300, true);
    emp.displayDetails();
    employee emp1(1002, "mahe", 40000, true);
    emp1.displayDetails();
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
