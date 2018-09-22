/**
 * Exercise 13.5: Write the assignment operator for the HasPtr class from exercise 13.5
 * in ? 13.1.1 (p. 499). As with the copy constructor, your assignment operator should
 * copy the object to which ps points.
 */
#include <string>
using namespace std;

class HasPtr
{
  public:
	HasPtr(const HasPtr &ptr) : ps(new string(*ptr.ps)), i(ptr.i){};
	HasPtr(const string &s = string()) : ps(new string(s)), i(0) {}
	HasPtr &operator=(const HasPtr &);

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
}