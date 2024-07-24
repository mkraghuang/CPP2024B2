#include<iostream>
using namespace std;
class phone
{
public:
	
	string model;
	string company;
	int slots;
	
};
int main()
{
	phone p;
	p.model = "nord";
	p.company = "oneplus";
	p.slots = 2;
	cout << "model is" << p.model << endl;
	cout << "company is" << p.company<< endl;
	cout << "no.of slots are" << p.slots;
}
