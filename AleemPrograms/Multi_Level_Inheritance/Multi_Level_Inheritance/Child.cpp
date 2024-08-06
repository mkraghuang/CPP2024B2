#include "Child.h"

Child::Child(void)
{
	cout << "C Constructor" << endl;
}

Child::~Child(void)
{
	cout << "C Distructor" << endl;
}

void Child::C(int e,int f)
{
	cout << "C Method" << endl;
	cout << e << " " << f << endl;
}