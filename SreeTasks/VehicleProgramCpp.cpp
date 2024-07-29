// VehicleProgramCpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Vehicle
{
private:
    int m_enginecc;
    string m_colour;
    int m_year;
    int m_wheels;
    int m_fuel;
    int m_topspeed;
    int m_seats;
    bool m_ismanual;
    int m_mileage;

public:

    Vehicle(int enginecc, string colour, int year, int wheels, int fuel)
        : m_enginecc(enginecc), m_colour(colour), m_year(year), m_wheels(wheels), m_fuel(fuel),
        m_topspeed(0), m_seats(2), m_ismanual(true), m_mileage(0)
    {
        cout << "Parameterized constructor called" << endl;
    }


    Vehicle(const Vehicle& src)
        : m_enginecc(src.m_enginecc), m_colour(src.m_colour), m_year(src.m_year), m_wheels(src.m_wheels),
        m_fuel(src.m_fuel), m_topspeed(src.m_topspeed), m_seats(src.m_seats), m_ismanual(src.m_ismanual),
        m_mileage(src.m_mileage)
    {
        cout << "Copy constructor called" << endl;
    }


    void DisplayVehicleDetails()
    {
        cout << "Engine Capacity: " << m_enginecc << " cc" << endl;
        cout << "Colour: " << m_colour << endl;
        cout << "Year: " << m_year << endl;
        cout << "Wheels: " << m_wheels << endl;
        cout << "Fuel: " << m_fuel << " liters" << endl;
        cout << "Top Speed: " << m_topspeed << " km/h" << endl;
        cout << "Seats: " << m_seats << endl;
        cout << "Manual Transmission: " << (m_ismanual ? "Yes" : "No") << endl;
        cout << "Mileage: " << m_mileage << " km" << endl;
    }


    void setFuel(int newFuel)
    {
        m_fuel = newFuel;
    }


    int GetYear() const
    {
        return m_year;
    }


    int GetEnginecc() const
    {
        return m_enginecc;
    }


    string GetColour() const
    {
        return m_colour;
    }


    void SetColour(string newColour)
    {
        m_colour = newColour;
    }

    // Get range (assuming a simple function based on fuel and mileage)
    int GetRange() const
    {
        return m_fuel * 10; // Example: range is fuel multiplied by a factor
    }


    int VehicleAge(int currentYear) const
    {
        return currentYear - m_year;
    }


    void SetTopSpeed(int topSpeed)
    {
        m_topspeed = topSpeed;
    }


    int GetTopSpeed() const
    {
        return m_topspeed;
    }


    void SetMileage(int mileage)
    {
        m_mileage = mileage;
    }


    int GetMileage() const
    {
        return m_mileage;
    }
};

int main()
{
    Vehicle myVehicle(2000, "Red", 2017, 4, 50);
    myVehicle.DisplayVehicleDetails();

    //  using the methods
    myVehicle.SetColour("Blue");
    myVehicle.setFuel(60);
    myVehicle.SetTopSpeed(160);
    myVehicle.SetMileage(15000);

    cout << "\nUpdated Vehicle Details:" << endl;
    myVehicle.DisplayVehicleDetails();

    cout << "Vehicle Age: " << myVehicle.VehicleAge(2024) << " years" << endl;

    return 0;
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
