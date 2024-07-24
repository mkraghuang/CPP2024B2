#include <iostream>
using namespace std;

// Function to find the maximum of array
int findmax(int arr[], int size)
{
	int i;

	// Initialize maximum element
	int max = arr[0];


	for (i = 1; i < size; i++)
		if (arr[i] > max)
			max = arr[i];

	return max;
}


int main()
{
	int arr[] = { 10, 324, 45, 90, 9808 };
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << sizeof(arr) << endl;
	cout << sizeof(arr[0]) << endl;

	int maxelement = findmax(arr, size);
	cout << "Largest in given array is " << maxelement;
	return 0;
}
