#include<iostream>
using namespace std;
int main() {
	int a = 18;
	int* ptr = &a;
	a = a++;
	cout << ptr << endl;
	cout << &a << endl;
	cout << *ptr << endl;
	cout << a << endl;

	int arr[5] = { 10,20,30,40,50 };
	int* ptr1;
	ptr1 = arr;
	cout << *ptr1 << endl;
	cout << (*ptr1 + 1) << endl;
	cout << (*ptr1 + 4) << endl;

	int arr1[5] = { 1,2,3,4,5 };
	int* ptr2;
	ptr2 = arr1;
	
	for (int i = 0; i < 5; i++) {
		cout << *ptr2 << endl;
		ptr2++;
	
	}

	return 0;


}