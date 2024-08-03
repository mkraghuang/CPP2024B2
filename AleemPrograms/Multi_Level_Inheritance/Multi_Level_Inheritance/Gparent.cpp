#include "Gparent.h"

Gparent::Gparent(void)
{
	cout << "GP Constructor" << endl;
}

Gparent::~Gparent(void)
{
	cout << "GP Distructor" << endl;
}

void Gparent::Gp()
{
	a=1;
	b=2;
	cout << "GP Method" << endl;
	cout << a << " " << b << endl;
	
}
