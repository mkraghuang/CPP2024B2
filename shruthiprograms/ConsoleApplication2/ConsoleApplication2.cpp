#include<iostream>
using namespace std;
struct personaldetails
{
	string name;
	int age;
	string qualification;
	string designation;
	string add;
};
int main()
{
	personaldetails p;
	cout << "enter the name";
	cin >> p.name;
	cout << "enter the age" ;
	cin >> p.age;
	cout << "enter the qualification" ;
	cin >> p.qualification;
	cout << "ente the dedigantion" ; 
		cin >> p.designation;
		cout << "enter the address" ;
		cin >> p.add;

		cout << " here are the personal details " << endl;
		cout << " name" <<p.name<< endl;
		cout << " age" <<p.age<< endl;
		cout << "qualification" <<p.qualification<< endl;
		cout << " desination" <<p.designation<< endl;
		cout << " address" <<p.add<< endl;

}