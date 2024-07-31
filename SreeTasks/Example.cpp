#include "Example.h"
#include <iostream>
using namespace std;

int* Example::Allocatearray(int size)
{
	return new int[size];
}

void Example::ArrayValues(int* arr, int size)
{
	for (int i = 0; i < size; i++) {
		arr[i] = 20 + 1;
	}
}

void Example::PrintArrayValues(int* arr, int size)
{
	for (int i = 0; i < size; i++) {
		cout << arr[i] << endl;
	}

}

Example::~Example()
{
	delete[] arr;
}


