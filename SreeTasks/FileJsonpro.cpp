// FileJsonpro.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <nlohmann/json.hpp>
using namespace std;
using json = nlohmann::json;

class Employee {
private:
    std::string  m_name;
    int  m_id;
    std::string m_gender;
    int m_sal;
    std::string m_dept;

public:
    // Parameterized constructor
    Employee(const std::string name, int id, const std::string gender, int sal, const std::string dept)
        : m_name(name), m_id(id), m_gender(gender), m_sal(sal), m_dept(dept) {}

    // Convert Employee object to JSON
    json to_json() const {
        json exampleJson;
        exampleJson["name"] =m_name;
        exampleJson["id"] = m_id;
        exampleJson["gender"] = m_gender;
        exampleJson["sal"] = m_sal;
        exampleJson["dept"] =m_dept;
        return exampleJson;
    }

    // Get functions for member variables
    std::string getGender() const
    { 
        return m_gender; 
    }
    int getSalary() const
    { 
        return m_sal; 
    }
    std::string getDepartment() const 
    { 
        return m_dept;
    }
};

int main() {

   std::ifstream file("JsonEmployee.json");
    if (!file.is_open()) {
        std::cout << "file not open !" << std::endl;
        return 1;
    }

    // Parse the JSON data
    json jsonData;
    file >> jsonData;
   file.close();
    // Create employee objects using parameterized constructor
   // Employee emp1("aleam", 1, "Male", 50000, "Sales");
    //Employee emp2("keerthi", 2, "Female", 60000, "Marketing");
    //Employee emp3("sai", 3, "Male", 45000, "IT");

    // Create a vector of Employee objects
   std::vector<Employee> employees;
  

   for (const auto& emp: jsonData) {
       // Extract data from JSON
       std::string name = emp["name"];
       int id = emp["id"];
       std::string gender = emp["gender"];
       int sal = emp["sal"];
       std::string dept = emp["dept"];

       // Create Employee object and add to the vector
       employees.emplace_back(name, id, gender, sal, dept);
   }


    // Count male and female employees
    int male_count = 0;
    int female_count = 0;

    // Count employees with salary above 50,000

    int salary_above_50000_count = 0;

    // Track departments and their strengths
    std::set<std::string> unique_departments;
    std::map<std::string, int> department_strength;

    for (const auto& emp : employees) {
        if (emp.getGender() == "Male") {
            male_count++;
        }
        else if (emp.getGender() == "Female") {
            female_count++;
        }

        // Check salary condition
        if (emp.getSalary() > 50000) {
            salary_above_50000_count++;
        }

        // Track departments and their strength
        unique_departments.insert(emp.getDepartment());
        department_strength[emp.getDepartment()]++;
    }
    
    // Print the counts
    std::cout << "Male Employees: " << male_count << endl;
   std:: cout << "Female Employees: " << female_count << endl;
    std::cout << "Employees with salary above 50,000: " << salary_above_50000_count << endl;

    // Print number of departments
   std:: cout << "Number of Departments: " << unique_departments.size() << endl;

    // Print the strength of each department
    std::cout << "Department Strengths:" << endl;
    for (const auto& dept : department_strength) {
      std:: cout << dept.first << ": " << dept.second << endl;
    }

    // Convert the vector of employees to JSON
    json employees_json = json::array();
    for (const auto& emp : employees) {
        employees_json.push_back(emp.to_json());
    }

    // Output the JSON object to a file
    ofstream output_file("employees.json");
    if (output_file.is_open()) {
        output_file << employees_json.dump(4); // Print with 4 spaces indent
        output_file.close();
    }
    else {
       std:: cout << "Unable to open file" << endl;
    }

    // Print JSON to console
   std:: cout << employees_json.dump(4) << endl;

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
