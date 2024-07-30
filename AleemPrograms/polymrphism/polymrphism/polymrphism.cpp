#include<iostream>
#include "Test.h"
int main()
{
Test obj;
cout << obj.sum(1,2) << endl;
cout << obj.sum(5.5,5.5) << endl;
int aleem = obj.sum(5,10.7,35);
cout << aleem << endl;
}
