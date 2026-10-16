
#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
public:
    string name;
    int age;

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Employee inherits from Person
class Employee : public Person {
public:
    int employeeID;

    void displayEmployee() {
        cout << "Employee ID: " << employeeID << endl;
    }
};

// ElectricalEngineer inherits from Employee
class ElectricalEngineer : public Employee {
public:
    string specialization;

    void displayEngineer() {
        cout << "Specialization: "
             << specialization << endl;
    }
};

int main() {
    // Create an ElectricalEngineer object
    ElectricalEngineer engineer;

    // Members inherited from Person
    engineer.name = "Kalid Alias";
    engineer.age = 21;

    // Member defined in Employee
    engineer.employeeID = 1001;

    // Member defined in ElectricalEngineer
    engineer.specialization = "Power Systems";

    cout << "ELECTRICAL ENGINEER DETAILS" << endl;
    cout << "---------------------------" << endl;

    // Using inherited and locally defined functions
    engineer.displayPerson();
    engineer.displayEmployee();
    engineer.displayEngineer();

    return 0;
}