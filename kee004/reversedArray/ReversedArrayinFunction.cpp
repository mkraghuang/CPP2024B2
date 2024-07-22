// ReversedArrayinFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
 int* aclocatearray(int size)
{
    return new int[size];
}
 void ValueOfArray(int* arr,int size)
 {
     for (int i = 0; i < size; i++) {
         arr[i] = 10 + 1;
     }

 }
 void printReversedArray(int* arr, int size) {
     for (int i = size - 1; i >= 0; i--) {
         cout << arr[i] << "";
     }
     cout << endl;
 }

int main()
{
    int* ptr = aclocatearray(5);
    ValueOfArray(ptr, 5);
    cout << "array value in reversed:" << endl;
    printReversedArray(ptr, 5);
    cout << "Hello World!\n";
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
