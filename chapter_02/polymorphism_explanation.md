## POLYMOPHISM
** What is meaning of polymorphism
Polymorphism means “one interface, many forms.” In C++, runtime polymorphism allows the same function call to produce different behaviour depending on the actual object being used.
Consider an electrical company with different types of workers:
* Employee is the parent class.
* ElectricalEngineer calculates an engineering-related salary bonus.
* Technician calculates a technician-related salary bonus.
* Both derived classes override the same virtual function, calculateBonus().
* Runtime polymorphism: When we call employee->calculateBonus(), C++ checks the actual object the pointer refers to and executes the corresponding overridden function. For example, if it points to an ElectricalEngineer object, the engineer's version is executed. If it points to a Technician object, the technician's version is executed.
* Why is the virtual keyword important?
The virtual keyword enables runtime polymorphism. When a virtual function is called through a base-class pointer or reference, C++ selects the overridden function belonging to the actual object rather than simply using the base-class version.
* Without virtual, the function call through a base-class pointer normally resolves to the base-class version, even if the pointer refers to a derived-class object.
* Why is the override keyword important?
* The override keyword tells the compiler that a derived-class function is intended to override a virtual function in the base class. If the function does not correctly match a base-class virtual function, the compiler reports an error. This helps prevent programming mistakes.