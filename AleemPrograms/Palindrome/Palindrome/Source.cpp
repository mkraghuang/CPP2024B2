#include<iostream>
using namespace std;

int main() 
{
    int num, reversedNum = 0, remainder, originalNum;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    while(num != 0)
    {
        remainder = num % 10; //123%10=3, 12%10=2, 1%10=1
        reversedNum = reversedNum * 10 + remainder;
        num /= 10; // 123/10=12, 12/10=1, 1/10=0
    }

    if(originalNum == reversedNum) {
        cout << "The number is a palindrome.";
    } else {
        cout << "The number is not a palindrome.";
    }

    return 0;
}