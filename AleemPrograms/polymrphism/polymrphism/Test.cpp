#include<iostream>
#include "Test.h"

int Test::sum(int a, int b)
{
	int c=a+b;
	return c;
}

double Test::sum(double a, double b)
{
	double c=a+b;
	return c;
}

int Test::sum(int a, double b, int c)
{
	int d=a+b+c;
	return d;
}
