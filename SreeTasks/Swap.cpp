#include "Swap.h"

Swap::Swap(int a, int b)
{
	x = a;
	y = b;
}

void Swap::swapping(int& a, int& b)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

Swap::~Swap()
{
	
}
