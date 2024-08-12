// ReinterpretKeyWord.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;


/*int main()
{
   int *p=new int(65);
    char* ch=reinterpret_cast<char*>(p);
    cout<<*p<<endl;
    cout<<*ch<<endl;
    cout<<p<<endl;
   cout<<ch<<endl;


    return 0;
}*/


/*struct Student{
   public:
 int a;
 int b;
 char c;
 bool d;

};

int main(){

    Student s;
    s.a=5;
    s.b=10;
    s.c='M';
    s.d=true;
    int* ptr=reinterpret_cast<int*>(&s);
    cout<<sizeof(s)<<endl;
    cout<<*ptr<<endl;
    ptr++;
    cout<<*ptr<<endl;
    ptr++;
    char* c=reinterpret_cast<char*>(ptr);
    cout<<c<<endl;

    bool* d=reinterpret_cast<bool*>(c);
    cout<<*d<<endl;

    cout<<*(reinterpret_cast<bool*>(c));

    return 0;
}*/

class Student

{
    string  m_name;
    //int m_age;

public:
    Student(string name/*,int age*/) :m_name(name)/*m_age(age)*/ {
        cout << "Base call constructor:" << endl;
    }
    void disp() {
        cout << m_name << endl;
        //cout<<m_age<<endl;
    }
};

class details :public Student

{
    long m_phonenum;
public:
    details(string name, long phonenum) :Student(name), m_phonenum(phonenum) {
        cout << "derived constructor call:" << endl;
    }
    void show() {
        cout << m_phonenum << endl;
    }
};

int main() {

    details* obj = new details("sree", 8500350146);
    Student* obj1 = reinterpret_cast<Student*>(obj);
    obj1->disp();
    obj->show();
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
