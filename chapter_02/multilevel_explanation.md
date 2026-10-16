
## BMultilevel inheritance
## MY DESCRIPTION 
This occurs when a class inherits from another derived class, forming an inheritance chain.
For example, consider an electrical engineering company:
Person stores general information about a person.
* Employee inherits from Person and adds employee information.
ElectricalEngineer inherits from Employee and adds engineering information.
The ElectricalEngineer class inherits publicly from Employee. It can access the inherited public members from both Employee and Person, and it introduces its own data member, specialization, and member function, displayEngineer().
* In the main() function, an object named engineer is created from the ElectricalEngineer class. The program assigns values to its inherited and locally defined data members, then calls the three member functions to display the information.
* The output displays the engineer's name, age, employee ID, and specialization. This demonstrates that the derived class can use accessible members inherited through the entire inheritance chain.
* Conclusion: The program demonstrates multilevel inheritance and code reusability because ElectricalEngineer can use members defined in its parent and grandparent classes without redefining them.