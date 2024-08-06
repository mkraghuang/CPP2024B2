#include "Sample.h"

Sample::Sample()
{
	cout << "Derived Sample Constructor" << endl;
}

Sample::~Sample()
{
	cout << "Derived Sample Distructor" << endl;
}

void Sample::disp_S()
{
	cout << "Derived Sample disp_S Method" << endl;
}

int Sample::sum(int x, int y)
{
    a = x;
    b = y;
    c = a + b;
    //cout << "sum = " << c << endl;
	return c;
}