#include <cstring>
#include <cstdlib>
#include "include/query.h"
#include "include/hasptr.h"

ostream &print(ostream &out, HasPtr &hp)
{
    cout << *hp.ps << endl;
    return out;
}

class X {
public:
    ~X(){cout << "X is deconstructed" << endl;}
};

class test {
public:
    test():x(new X), data(new int(5)){}
    ~test(){}
    int *data;
private:
    shared_ptr<X> x;
};

class numbered {
public:
    numbered(const numbered &s) : mysn(rand()) {}
    numbered(){mysn = rand();}
    int mysn;
};

void f(numbered &s) { cout << s.mysn << endl; }

int main(int argc, char const *argv[])
{    
    numbered a, b = a, c = b;
    f(a); f(b); f(c);
    return 0;
}
