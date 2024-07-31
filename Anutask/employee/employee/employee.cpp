#include<iostream>
using namespace std;
class Employee {
private:
	int number;
	string ename;
	long salary;
	string division;
public:
	Employee(int num, string name, int sal, string dept)
	{
		number = num;
		ename = name;
		salary = sal;
		division = dept;
    }
	void DisplayEmployee() {
		cout << number <<ename << salary <<endl;
	}
	long Getsalary() {
		return salary;
	}
	void Setsalary(long num) {
		salary = num;
	}
	string Getname() {
		return ename;
	}
	void Setname(string temp) {
		ename = temp;
	}
};
int main() {
	Employee obj(10, "Nishitha", 2000, "IT");
	obj.DisplayEmployee();
	cout << obj.Getsalary();
	obj.Setsalary(5000);
	cout << '\n' << obj.Getsalary() << endl;
	cout << obj.Getname() << endl;
	obj.Setname("Tanvitha");
	cout << obj.Getname();
	return 0;

}