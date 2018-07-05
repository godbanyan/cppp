/*
 * Exercise 7.22: Update your Person class to hide its implementation.
 */

#include <string>
#include <iostream>

struct Person {
    friend std::istream &read(std::istream &is, Person &person);
    friend std::ostream &print(std::ostream &os, const Person &person);
public:
    Person() = default;
    Person(const std::string &n, const std::string &add) : name(n), address(add){}
    std::string get_name(void) const { return name; }
    std::string get_address(void) const { return address; }

private:
    std::string name;
    std::string address;
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