/**
 * Exercise 13.5: Given the following sketch of a class, write a copy constructor that
 * copies all the members. Your constructor should dynamically allocate a new string
 * (§ 12.1.2, p. 458) and copy the object to which ps points, rather than copying ps itself.
 */
#include <string>
using namespace std;

class HasPtr
{
  public:
    HasPtr(const HasPtr &ptr) : ps(new string(*ptr.ps)), i(ptr.i){};
    HasPtr(const string &s = string()) : ps(new string(s)), i(0) {}

  private:
    string *ps;
    int i;
};

int main(void)
{
}