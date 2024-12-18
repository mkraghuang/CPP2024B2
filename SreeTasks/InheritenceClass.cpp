// InheritenceClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
#include <iostream>
using namespace std;

class mpc {
public:
    int m;
    int p;
    int c;
    mpc(int m, int p, int c) {
        this->m = m;
        this->p = p;
        this->c = c;
    }
    void showDetails() {
        cout << "m = " << m << endl;
        cout << "p = " << p << endl;
        cout << "c = " << c << endl;
    }
};

class total : public mpc {
public:
    int t;
    total(int m, int p, int c) : mpc(m, p, c) {
        t = m + p + c;
        cout << "total = " << t << endl;
    }
};

int main() {
    total t1(10, 20, 30);
    t1.showDetails();

    return 0;
}
