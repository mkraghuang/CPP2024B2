#include<iostream>
#include<cstring>
using namespace std;

struct employee {
	string name;
	int age;
	string dept;
	char gender;
};
int main() {
	employee emp1{ "anusha",28,"IT",'f' };
	employee emp2{ "Nishu",20,"IT",'f' };
	employee emp3{ "tilak",30,"IT",'m' };
	cout << emp2.age << endl;
	cout << emp1.gender << endl;
	cout << emp3.dept << endl;

	employee arr[3] = { { "anusha",28,"IT",'f'},{ "Nishu",20,"IT",'f' },{ "tilak",30,"IT",'m' } };
	cout << arr[2].name << endl;
	cout << arr[1].dept << endl;
	cout << arr[3].gender << endl;

	for (int i = 0; i < 3; i++) {

		cout << arr[i].name << '\t';
		cout << arr[i].age << '\t';
		cout << arr[i].gender << '\t';
	}
	return 0;

}