// SwapInClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"swap.h"
//#include"Swap.cpp"
using namespace std;

int main()
{
  //  int x1 = 0, y1 = 0, temp1 = 0;
    Swap s(10, 20);
    cout << "BEFORE SWAP :" << endl;
    cout << "X=" <<s. x << endl;
    cout << "Y=" <<s. y << endl;

   s.swapping(s.x, s.y);
   cout << "after swap :" << endl;
   cout << "X=" <<s. x << endl;
   cout << "Y=" << s.y << endl;
    
    

    cout << "DISTRUCTOR CALL :" << endl;
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
