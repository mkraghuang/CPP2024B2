#include<iostream>
#include"Employee.h"
int main() {
	Employee obj(10, "Nishitha", 5000, "IT");
	obj.displayEmployee();
	Employee obj1 = obj;
	cout << obj1.Getsalary() << endl;
	obj1.Setsalary(12000);
	cout << obj1.Getsalary() << endl;
	cout << obj.Getsalary() << endl;

	cout << obj.Getname() << endl;
	obj.Setname("TANVITHA");
	cout << obj.Getname() << endl;
	cout << obj1.Getname() << endl;
	obj.displayEmployee();
	obj1.displayEmployee();


	return 0;

}