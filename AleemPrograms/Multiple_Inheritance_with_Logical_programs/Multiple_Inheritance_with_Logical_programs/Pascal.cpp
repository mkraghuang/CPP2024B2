#include "Pascal.h"
//#include "Palindrmoe.h"

Pascal::Pascal(int a11, int b11, int c11, int d11, int e11, int f11) : Palindrmoe(a11, b11, c11, d11)
{
	e1=e11;
	f1=f11;
	cout << "Pascal Constructor" << endl;
	cout << e1 << " " << f1 << endl;
}

Pascal::~Pascal()
{
	cout << "Pascal Distructor" << endl;
}

void Pascal::Pascl()
{
	int n;
	cout << "For Pascal triangle:-" << endl;
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
}
