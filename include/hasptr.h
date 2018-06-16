#ifndef _HASPTR_H
#define _HASPTR_H

#include <string>
#include <ostream>

class HasPtr {
friend std::ostream &print(std::ostream &out, HasPtr &hp);
public:
    HasPtr(const std::string &s = std::string()) :
        ps(new std::string(s)), i(0){}
    HasPtr(const HasPtr &hp) : i(hp.i), ps(new std::string(*hp.ps)) {}
    HasPtr &operator=(const HasPtr &hp);
    std::string *get_ps() const { return ps; }
    ~HasPtr(){}

private:
    std::string *ps;
    int i;
};

HasPtr& HasPtr::operator=(const HasPtr &hp)
{
    i = hp.i;
    *ps = *hp.ps;
    return *this;
}

#endif