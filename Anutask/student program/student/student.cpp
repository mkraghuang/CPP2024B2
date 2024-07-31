#include<iostream>
#include<cstring>
using namespace std;
class student {
private:
	string sname;
	int srollnumber;
	char sgender;
	int sdob;
public:
	student(string name, int number, char gender, int dob){
		sname = name;
		srollnumber = number;
		sgender = gender;
		sdob = dob;

}
	void dispalystudent() {
		cout << sname << srollnumber << sgender << sdob;
	}
	string Getname() {
		return sname;
	}
	void Setname(string temp) {
		sname = temp;
	}
	char Getgender() {
		return sgender;
	}
	int Getrollnumber() {
		return srollnumber;
	}
     void Setrollnumber(int num) {
		srollnumber = num;
	}
};
int main() {
	student s("nishitha", 10, 'f', 28);
	s.dispalystudent();
	cout << s.Getname() << endl;
	s.Setname("aashu");
	cout << s.Getname();
	cout << s.Getgender() << endl;
	cout << s.Getrollnumber() << endl;
	s.Setrollnumber(20);
	cout << s.Getrollnumber() << endl;
	return 0;
}