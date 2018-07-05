/*
 * Exercise 7.9: Add operations to read and print Person objects
 * to the code you wrote for the exercises in 7.5.
 */

#include <string>
#include <iostream>

struct Person {
    std::string name;
    std::string address;
    std::string get_name(void) const { return name; }
    std::string get_address(void) const { return address; }
};

std::istream &read(std::istream &is, Person &person)
{
    is >> person.name >> person.address;
    return is;
}

std::ostream &print(std::ostream &os, const Person &person)
{
    os << person.name << " " << person.address;
    
    return os;
}

int main(void)
{
    return 0;
}