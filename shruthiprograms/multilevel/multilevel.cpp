#include<iostream>
using namespace std;


class A {
    
public:
   void sum()
        {
       int a;
       int b;
       cout << "enter a value";
       cin >> a;
       cout << "enter b value";
       cin >> b;
       int c = a + b;
       cout << c << endl;
        }
    
 };


class B : public A {
public:
    void sub()
    {
        int x;
        int y;
        cout << "enter x value";
        cin >> x;
        cout << "enter y value";
        cin >> y;
        int z = x - y;
        cout << z<<endl;
   }
};


class C : public B {
public:
    void multi()
    {
        int p;
        int q;
        cout << "enter p value";
        cin >> p;
        cout << "enter q value";
        cin >> q;
        int r = p* q;
        cout << r << endl;
    }
};
int main()
{
    
    C obj;

    obj.sum();
    obj.sub();
    obj.multi();
    
    return 0;
}