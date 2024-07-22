#include<iostream>
using namespace std;
class Rectangle{
private:
	double length;
	double width;

public:
	Rectangle(double len, double wid) {
		length = len;
		width = wid;
     }
	void DisplayDimensions() {
		cout << length << '\t' << width << endl;
	}
	double CalculateArea() {
		return length * width;
	}
	double CalculatePerimeter() {
		return 2 * (length + width);
	}

};
int main() {
	Rectangle r(10, 20);
	r.DisplayDimensions();
	cout <<"Area" << r.CalculateArea() << endl;
	cout << "perimeter" << r.CalculatePerimeter();
	return 0;


}