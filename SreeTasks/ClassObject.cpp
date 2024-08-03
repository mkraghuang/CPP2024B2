// ClassObject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;

// Define a class called 'Car'
class Car {
private:
    string brand;
    string model;
    int year;

public:
    // Constructor to initialize object
    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
    }

    // Method to display car details
    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    // Create objects of class Car
    Car car1("Toyota", "Camry", 2023);
    Car car2("Honda", "Accord", 2022);

    // Call display method for each object
    cout << "Car 1 details:" << endl;
    car1.display();

    cout << "\nCar 2 details:" << endl;
    car2.display();

    return 0;
}


int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
