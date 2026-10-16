#include <iostream>
using namespace std;

// Base class
class Employee {
public:
        virtual void calculateBonus() {

        cout << "Calculating employee bonus."<< endl;
    }


    // Virtual destructor for safe base-pointer use

        virtual ~Employee() = default;
};

// First derived class

class ElectricalEngineer : public Employee {
public:
       void calculateBonus() override {
        cout << "Electrical Engineer bonus: UGX 500,000" << endl;
    }
};

// Second derived class
class Technician : public Employee {
public:
         void calculateBonus() override {
         cout << "Technician bonus: UGX 250,000" << endl;
}
};

int main() {
    ElectricalEngineer engineer;
    Technician technician;

    // Base-class pointer
    Employee* employee;

    cout << "EMPLOYEE BONUS SYSTEM" << endl;

    cout << "---------------------" << endl;


   
    // Point to the ElectricalEngineer object
   
    employee = &engineer;

    employee->calculateBonus();

    // Point to the Technician object

    employee = &technician;
    
    employee->calculateBonus();

    return 0;
}