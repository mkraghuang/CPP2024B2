// ExampleProgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class mpc
{
    int  maths;
    int physics;
    int chemistry;

public:
    mpc()
    {
    
      maths = 50;
      physics = 40;
     chemistry = 50;
    }
    mpc(int m, int p, int c) {
        cout << "paramitarized con:" << endl;
        maths = m;
        physics = p;
        chemistry = c;
    }
    mpc(const mpc& obj) {
        cout << "copy con:" << endl;
        maths = obj.maths;
        physics = obj.physics;
        chemistry = obj.chemistry;
     /*   cout << "m=" << obj.maths << endl;
        cout << "p=" <<obj. physics << endl;
        cout << "c=" << obj.chemistry << endl;*/
    }
   void getdata() {
        cout << "maths=" << maths << endl;
        cout << "physics=" << physics << endl;
        cout << "chemistry=" << chemistry << endl;
   }
};

int main()
{
    mpc m;
   m.getdata();

   mpc m1(30, 40, 28);
   m1.getdata();

   mpc m2 = m1;
   m2.getdata();
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
