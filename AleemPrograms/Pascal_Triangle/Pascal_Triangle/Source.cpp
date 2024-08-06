#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    for (int i=1; i<=n; i++)
    {
       int co=1;
       for (int j=n-i; j>0; j--)
       {
           cout << " " ;
       }
       for (int k=1; k<=i; k++)
       {
           cout << co << " ";
           co = co*(i-k)/k;
       }
       cout << endl;
    }
    return 0;
}