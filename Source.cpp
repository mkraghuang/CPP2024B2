#include<iostream>
using namespace std;

class Student
{
    private:
        char name[20];
        int rno;
    public:
        void disp()
        {
            cout << "inside the class" << endl;
            cout << "Enter name:" << endl;
            cin >> name;
            cout << "Enter rno:" << endl;
            cin >> rno;
            cout << "Name: " << name << endl;
            cout << "r.no: " << rno << endl;
        }
    
};
int main()
{
    Student s;
    s.disp();
    
    return 0;
}