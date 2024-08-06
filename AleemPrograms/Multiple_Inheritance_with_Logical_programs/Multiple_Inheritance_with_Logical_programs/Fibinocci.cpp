#include "Fibinocci.h"

Fibinocci::Fibinocci(int a11, int b11)
{
	a1 = a11;
	b1 = b11;
	cout << "Fibinocci Constructor" << endl;
	cout << a1 << " " << b1 << endl;
}

Fibinocci::~Fibinocci()
{
	cout << "Fibinocci Distructor" << endl;
}

void Fibinocci::fibi()
{
	int a,b,c,n;
	cout << "Enter any number: " << endl;
	cin >> n;
	a=0;
	b=1;
	c=0;
	cout << "Fibinocci Series:-" << endl;
	for (int i=0; i<n; i++)
	{
		cout << a << endl;
		c=a+b;
		a=b;
		b=c;
	}
}
