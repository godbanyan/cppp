/*
 * Exercise 7.15: Add appropriate constructors to your Person class
 */

#include <string>
#include <iostream>

struct Person {
    Person() = default;
    Person(const std::string &n, const std::string &add) : name(n), address(add){}
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