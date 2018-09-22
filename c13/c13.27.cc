/**
 * Exercise 13.27 : Define your own reference-counted version of HasPtr.
 */
#include <string>
using namespace std;

class HasPtr
{
  public:
	HasPtr(const HasPtr &ptr) : ps(ptr.ps), i(ptr.i), use(ptr.use) { ++*ptr.use; }
	HasPtr(const string &s = string()) : ps(new string(s)), i(0), use(new size_t(1)) {}
	HasPtr &operator=(const HasPtr &);
	~HasPtr();

  private:
	string *ps;
	int i;
	size_t *use;
};

HasPtr &HasPtr::operator=(const HasPtr &ptr)
{
	++*ptr.use;
	if (--*use == 0)
	{
		delete ps;
		delete use;
	}
	ps = ptr.ps;
	use = ptr.use;
	i = ptr.i;
	return *this;
}

HasPtr::~HasPtr()
{
	if (--*use == 0)
	{
		delete ps;
		delete use;
	}
}

int main(void)
{
}