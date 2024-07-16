#include<iostream>
using namespace std;
void palindrome(int num) {
    int rev = 0, temp;
    temp = num;
    int remainder;
    while (num > 0) {
        remainder = num % 10;
        rev = rev * 10 + remainder;
        num = num / 10;
    }
    if (temp == rev)
        cout << temp << " is a palindrome" << endl;
    else
        cout << temp << " is not a palindrome" << endl;
}
int main() {
    int n1 = 121;
    int n2 = 1234;
    int n3 = 12621;
    palindrome(n1);
    palindrome(n2);
    palindrome(n3);
    return 0;
}