#include<iostream>
using namespace std;
class Flower
{
    string m_smell;
    string m_colour;
    string m_leafshape;
public:

    Flower(string smell, string colour, string leafshape)
    {
        cout << "this is a parent constructor" << endl;
        m_smell = smell;
        m_colour = colour;
        m_leafshape = leafshape;

    }
    string getsmell()
    {
        return m_smell;
    }
    string getcolour()
    {
        return m_colour;
    }

    ~Flower()
    {
        cout << "this is a destructor" << endl;
    }
};
class Rose : public Flower
{
    string name;
public:
    Rose(string name, string smell, string colour, string leafshape) :Flower(smell, colour, leafshape)
    {
        cout << "this is derived class constructor" << endl;

    }
    ~Rose()
    {
        cout << "this is derived class destructor" << endl;
    }
};
int main()
{
    Rose r("good", "pink", "oval", "rosy");
    cout << r.getsmell() << endl;
    cout << r.getcolour() << endl;

}