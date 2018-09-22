/**
 * Exercise 13.18: Define an Employee class that contains an employee name and a
 * unique employee identifier. Give the class a default constructor and a constructor that
 * takes a string representing the employee’s name. Each constructor should generate
 * a unique ID by incrementing a static data member
 */
#include <string>
#include <iostream>
using namespace std;

class Employee
{
  public:
	Employee() : id(count++) {}
	Employee(const string &nm) : name(nm), id(count++) {}
	string name;
	int id;

  private:
	static int count;
};

int Employee::count = 0;

int main(void)
{
	Employee e1;
	Employee e2("banyan");
	cout << e1.id << endl;
	cout << e2.id << endl;
}