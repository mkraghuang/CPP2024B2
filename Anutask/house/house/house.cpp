#include <iostream>
using namespace std;

class House
{
private: // no need - priavte is default access-specifier
	int rooms;
	bool isindependent;
	string address;
	string color;

public:

	House(int r, bool isind, string add, string col)
	{
		rooms = r;
		isindependent = isind;
		address = add;
		color = col;
	}

	string getAddress()
	{
		return address;
	}
	void setAddress(string newAddress)
	{
		address = newAddress;
	}

	void displayHouseDetails()
	{

	}
};

int main()
{
	House VinaysHouse(3, false, "Hitech-city", "Yellow");


	//int a = VinaysHouse.rooms;
	cout << VinaysHouse.getAddress();

	VinaysHouse.setAddress("Kokapet");

	cout << VinaysHouse.getAddress();
	return 0;
}
