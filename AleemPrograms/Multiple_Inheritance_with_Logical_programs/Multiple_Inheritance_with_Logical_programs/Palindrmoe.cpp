#include "Palindrmoe.h"

Palindrmoe::Palindrmoe(int a11, int b11, int c11, int d11) : Fibinocci(a11, b11)
{
	c1=c11;
	d1=d11;
	cout << "Palindrome Constructor" << endl;
	cout << c1 << " " << d1 << endl;
}

Palindrmoe::~Palindrmoe()
{
	cout << "Palindrome Distructor" << endl;
}

void Palindrmoe::Palin()
{
	int num, reversedNum = 0, remainder, originalNum;

	cout << "To check Palindrome or Not:-" << endl;
    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    while(num != 0)
    {
        remainder = num % 10; //123%10=3, 12%10=2, 1%10=1
        reversedNum = reversedNum * 10 + remainder;
        num /= 10; // 123/10=12, 12/10=1, 1/10=0
    }

    if(originalNum == reversedNum) 
	{
        cout << "The number is a palindrome." << endl;
    } 
	else 
	{
        cout << "The number is not a palindrome." << endl;
    }

}
