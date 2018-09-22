/**
 * Exercise 13.22: Assume that we want HasPtr to behave like a value. That is, each
 * object should have its own copy of the string to which the objects point. We’ll show
 * the definitions of the copy-control members in the next section. However, you already
 * know everything you need to know to implement these members. Write the HasPtr
 * copy constructor and copy-assignment operator before reading on.
 */
#include <string>
#include <iostream>
using namespace std;

class HasPtr
{
  public:
	HasPtr(const HasPtr &ptr) : ps(new string(*ptr.ps)), i(ptr.i){};
	HasPtr(const string &s = string()) : ps(new string(s)), i(0) {}
	HasPtr &operator=(const HasPtr &);
	~HasPtr() { delete ps; }

  private:
	string *ps;
	int i;
};

HasPtr &HasPtr::operator=(const HasPtr &ptr)
{
	auto tmp = ps;
	ps = new string(*ptr.ps);
	delete tmp;
	i = ptr.i;
	return *this;
}

int main(void)
{
	return 1;
}