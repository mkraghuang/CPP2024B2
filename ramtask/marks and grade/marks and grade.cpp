#include <iostream>
using namespace std;

int main()
{
    string studname;
    int studmarks;

    cout << "Enter student name: ";
    cin >> studname;

    cout << "Enter marks: ";
    cin >> studmarks;

    cout << "Student Name: " << studname << endl;
    cout << "Marks: " << studmarks << endl;

    if (studmarks > 90) {
        cout << "Grade: A+" << endl;
    }
    else if (studmarks > 75) {
        cout << "Grade: A" << endl;
    }
    else if (studmarks > 50) {
        cout << "Grade: B" << endl;
    }
    else {
        cout << "Grade: Fail" << endl;
    }

    return 0;
}
