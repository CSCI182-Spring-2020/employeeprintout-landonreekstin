// EmployeePrintout.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//declaring enum type EmployeeType
enum EmployeeType {Manager, Employee, Volunteer};


//Address struct
struct Address
{
    string City;
    string State;
};


//Employee struct with nested address struct
struct Empl
{
    string name;
    int DivisionNo;
    Address address;
    EmployeeType Employee;
};

int main()
{
    //istantiates emp and inserts values into the members of its structs
    Empl emp;
    emp.name = "Kevin";
    emp.DivisionNo = 2;
    emp.address.City = "Elsah";
    emp.address.State = "IL";
    emp.Employee = Employee;

    //Pretty print the employee info
    cout << "Employee Info: " << emp.Employee << ", " << emp.name << ", " << emp.DivisionNo << ", " << emp.address.City << ", " << emp.address.State << endl;

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
