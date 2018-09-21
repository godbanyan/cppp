/**
 * Exercise 12.2: Write your own version of the StrBlob class including
 * the const versions of front and back.
 */
#include <iostream>
#include <memory>
#include <vector>
#include <new>

using namespace std;

class strBlob
{
  public:
    typedef vector<string>::size_type size_type;
    strBlob();
    strBlob(initializer_list<string> il) : data(make_shared<vector<string>>(il)) {}
    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }
    void push_back(const string &t) { data->push_back(t); }
    void pop_back(void);
    string &front() const;
    string &back() const;

  private:
    std::shared_ptr<std::vector<std::string>> data;
    // throws msg if data[i] isn’t valid
    void check(size_type i, const std::string &msg) const;
};

void strBlob::check(size_type i, const string &msg) const
{
    if (i > data->size())
        throw out_of_range(msg);
}

string &strBlob::front() const
{
    check(0, "front on empty blob.");
    return data->front();
}

string &strBlob::back() const
{
    check(0, "back on empty blob.");
    return data->back();
}

void strBlob::pop_back(void)
{
    check(0, "pop_back on empty blob.");
    data->pop_back();
}

int main(void)
{
}