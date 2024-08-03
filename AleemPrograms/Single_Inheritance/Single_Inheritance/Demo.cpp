#include "Demo.h"

Demo::Demo()
{
	cout << "Base Demo COnstructor" << endl;
}

Demo::~Demo()
{
	cout << "Base Demo Distructor" << endl;
}

void Demo::disp_D()
{
	cout << "Base Demo disp_D Method" << endl;
}

int Demo::mul(int a, int b)
{
	//int c;
	int c = a*b;
	return c;
}