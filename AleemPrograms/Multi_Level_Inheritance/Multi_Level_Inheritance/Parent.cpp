#include "Parent.h"

Parent::Parent(void)
{
	cout << "P Constructor" << endl;
}

Parent::~Parent(void)
{
	cout << "P Distructor" << endl;
}

void Parent::P(int c1,int d)
{
	cout << "P Method" << endl;
	cout << c1 << " " << d << endl;
}