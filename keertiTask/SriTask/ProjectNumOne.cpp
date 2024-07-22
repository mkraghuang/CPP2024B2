
// ProjectNumOne.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class course
{
public:
    int n, c, cpp, java;
    int* language;
    course()
    {
        c = cpp = java = 0;
        cout << "CPP-KARTHIK-2024:" << endl;
        cout << "Number Of Openings:" << endl;
        cin >> n;

        language = new int[n];
        for (int i = 0; i < n; i++) {
            cout << "Which language are you selecting ?(1 for C,2 for CPP,3 for JAVA)" << endl;
            cin >> language[i];
        }
        
      
    }
    void countLanguage() {
        for (int i = 0; i < n; i++) {
            if (language[i] == 1) {
                c;
            }
            else if (language[i] == 2) {
                cpp;
            }
            else {
                java;
            }

        }
    }
    void displayCount()
    {
        cout << "NUMBER OF C APPLICATIONS:" <<c<< endl;
        cout << "NUMBER OF CPP APPLICATIONS:" <<cpp <<endl;
        cout << "NUMBER OF JAVA APPLICATIONS:" << java<<endl;
        
    }
    ~course()
    {
        delete []language;
    }
};

int main()
{
    course batch1;
    batch1.countLanguage();
    batch1.displayCount();
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
