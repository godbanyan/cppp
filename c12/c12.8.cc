/**
 * Exercise 12.19: Define your own version of StrBlobPtr and update your StrBlob
 * class with the appropriate friend declaration and begin and end members.
 */
#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class StrBlobPtr;

class StrBlob
{
  public:
    friend class StrBlobPtr;
    StrBlobPtr begin(); // return StrBlobPtr to the first element
    StrBlobPtr end();   // and one past the last element
    typedef vector<string>::size_type size_type;
    StrBlob();
    StrBlob(initializer_list<string> il) : data(make_shared<vector<string>>(il)) {}
    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }
    void push_back(const string &t) { data->push_back(t); }
    void pop_back(void);
    string &front() const;
    string &back() const;

  private:
    std::shared_ptr<std::vector<std::string>> data;
    // throws msg if data[i] isnâ€™t valid
    void check(size_type i, const std::string &msg) const;
};

void StrBlob::check(size_type i, const string &msg) const
{
    if (i > data->size())
        throw out_of_range(msg);
}

string &StrBlob::front() const
{
    check(0, "front on empty blob.");
    return data->front();
}

string &StrBlob::back() const
{
    check(0, "back on empty blob.");
    return data->back();
}

void StrBlob::pop_back(void)
{
    check(0, "pop_back on empty blob.");
    data->pop_back();
}

// StrBlobPtr throws an exception on attempts to access a nonexistent element
class StrBlobPtr
{
  public:
    StrBlobPtr() : curr(0) {}
    StrBlobPtr(StrBlob &a, size_t sz = 0) : wptr(a.data), curr(sz) {}
    std::string &deref() const;
    StrBlobPtr &incr(); // prefix version
  private:
    // check returns a shared_ptr to the vector if the check succeeds
    std::shared_ptr<std::vector<std::string>>
    check(std::size_t, const std::string &) const;
    // store a weak_ptr, which means the underlying vector might be destroyed
    std::weak_ptr<std::vector<std::string>> wptr;
    std::size_t curr; // current position within the array
};

std::string &StrBlobPtr::deref() const
{
    auto p = check(curr, "dereference past end");
    return (*p)[curr]; // (*p) is the vector to which this object points
}

std::shared_ptr<std::vector<std::string>>
StrBlobPtr::check(std::size_t i, const std::string &msg) const
{
    auto ret = wptr.lock(); // is the vector still around?
    if (!ret)
        throw std::runtime_error("unbound StrBlobPtr");
    if (i >= ret->size())
        throw std::out_of_range(msg);
    return ret; // otherwise, return a shared_ptr to the vector
}

// prefix: return a reference to the incremented object
StrBlobPtr &StrBlobPtr::incr()
{
    // if curr already points past the end of the container, can’t increment it
    check(curr, "increment past end of StrBlobPtr");
    ++curr; // advance the current state
    return *this;
}

StrBlobPtr StrBlob::begin() { return StrBlobPtr(*this); }
StrBlobPtr StrBlob::end() { return StrBlobPtr(*this, data->size()); }

int main(void)
{
}