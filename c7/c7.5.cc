/*
 * Exercise 7.5: Provide operations in your Person class to return
 * the name and address. Should these functions be const? Explain your choice.
 */

#include <string>

struct Person {
    std::string name;
    std::string address;
    std::string get_name(void) const { return name; }
    std::string get_address(void) const { return address; }
};

int main(void)
{
    return 0;
}