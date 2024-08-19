// FileJsonpro.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <nlohmann/json.hpp>

using namespace std;
using json = nlohmann::json;

class Students
{
public:
    std::string name;
    int AGE;
    bool PAID;
    int CLASS;
    int MARKS;

    json to_json() {
        json file;
        file["name"] = name;
        file["AGE"] = AGE;
        file["PAID"] = PAID;
        file["CLASS"] = CLASS;
        file["MARKS"] = MARKS;
        return file;
    }
};

int main() {
    Students student;
    student.name = "sai";
    student.AGE = 26;
    student.PAID = true;
    student.CLASS = 10;
    student.MARKS = 85;

    json student_json = student.to_json();

    // Output the JSON object to a file
    ofstream output_file("student.json");
    if (output_file.is_open()) {
        output_file << student_json.dump(4); // Pretty print with 4 spaces indent
        output_file.close();
    }
    else {
        cout << "Unable to open file" << endl;
    }

    // Print JSON to console
    cout << student_json.dump(4) << endl;

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
