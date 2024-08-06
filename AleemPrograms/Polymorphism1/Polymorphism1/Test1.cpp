#include<iostream>
#include "Test1.h"

int Test1::sum(int a, int b)
{
	int c=a+b;
	return c;
}

double Test1::sum(double a, double b)
{
	double c=a+b;
	return c;
}

int Test1::sum(int a, double b, int c)
{
	int d=a+b+c;
	return d;
}