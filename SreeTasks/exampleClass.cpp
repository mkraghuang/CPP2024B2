#include "exampleClass.h"
#include<iostream>
using namespace std;

ExampleClass::ExampleClass()
{
	cout << "CONSTRUCTOR CALL :" << endl;
}

void ExampleClass::function()
{
	cout << "Without parameter function call :" << endl;
}

void ExampleClass::function(int a)
{
	cout << "parametarized function call :" << endl;

	cout << a << endl;

}

void ExampleClass::function(int a, int b)
{
	cout << "adition function call :" << endl;
	cout << a << "\n" << b << endl;
	cout << a + b << endl;
}

void ExampleClass::function(char x, int c, int y)
{
	cout << x << "\n" << c << "\n" << y << endl;
}

 ExampleClass::~ExampleClass()
{
	 cout << "dESTRUCTOR CALL :" << endl;
}
