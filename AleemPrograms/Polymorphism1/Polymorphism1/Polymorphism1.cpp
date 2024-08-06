#include<iostream>
#include "Test1.h"
int main()
{
Test1 obj;
cout << obj.sum(1,2) << endl;
cout << obj.sum(5.5,5.5) << endl;
int aleem = obj.sum(5,10.7,35);
cout << aleem << endl;
}

