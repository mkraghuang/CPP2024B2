#include <iostream>
using namespace std;
int main()
{
    int x = 14;
    int y = 54;
    int z = 12;
    
    if (x<y)
    {
        cout<<"From if" << endl;
    }
    else
    {
        cout<< "From else" << endl;
    }
    
    cout << "_______________" << endl;
    
    if (x>y)
    {
        cout<<"From if" << endl;
    }
    else
    {
        cout<< "From else";
    }

    return 0;
}