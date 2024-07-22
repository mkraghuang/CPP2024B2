#include <iostream>
using namespace std;

int main() {
    int numb;
    cout << "enter numb:";
    cin >> numb;
    if (numb % 2 == 0) {
        cout << "number is even";
    }
    else if (numb % 2 != 0) {
        cout << "number is odd";
    }
    else
    {
        cout << "not a number";
    }
    return 0;
}