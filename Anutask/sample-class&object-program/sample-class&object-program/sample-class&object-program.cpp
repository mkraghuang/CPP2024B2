#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void introduce() {
        cout << "Hello, my name is " << name << " and I am " << age << " years old." << endl;
    }
};

int main() {
    Person p1;
    p1.name = "Appu";
    p1.age = 30;

    Person p2;
    p2.name = "Anu";
    p2.age = 25;

    p1.introduce();
    p2.introduce();

    return 0;
}