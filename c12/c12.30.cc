/**
 * Exercise 12.30: Define your own versions of the TextQuery and QueryResult
 * classes and execute the runQueries function.
 */
#include <iostream>
#include <memory>
#include <vector>
#include <fstream>
#include <sstream>
#include <map>
#include <set>
#include <typeinfo>

using namespace std;

class QueryResult;

class TextQuery
{
    friend QueryResult;

  public:
    TextQuery(ifstream &in);
    QueryResult query(const string &sg);

  private:
    shared_ptr<vector<string>> file;
    shared_ptr<map<string, int>> counter;
    map<string, shared_ptr<set<int>>> nr;
};

class QueryResult
{
    friend ostream &print(ostream &, const QueryResult &);

  public:
    QueryResult(TextQuery &tq, string s, shared_ptr<set<int>> nr)
        : sought(s), file(tq.file), counter(tq.counter), nr(nr){};

  private:
    string sought;
    shared_ptr<vector<string>> file;
    shared_ptr<map<string, int>> counter;
    shared_ptr<set<int>> nr;
};

QueryResult TextQuery::query(const string &sg)
{
    shared_ptr<set<int>> nodata(make_shared<set<int>>());
    auto ret = nr.find(sg);
    if (ret != nr.end())
        return QueryResult(*this, sg, ret->second);
    else
        return QueryResult(*this, "", nodata);
}

TextQuery::TextQuery(ifstream &in) : file(new vector<string>), counter(new map<string, int>)
{
    string line;
    int number = 1;
    while (getline(in, line))
    {
        file->push_back(line);
        string word;
        istringstream ln(line);
        while (ln >> word)
        {
            auto ret = counter->insert({word, 1});
            if (!ret.second)
                ++ret.first->second;
            auto wd = nr.find(word);
            if (wd == nr.end())
                nr[word].reset(new set<int>);

            nr[word]->insert(number);
        }
        number++;
    }
}

ostream &print(ostream &out, const QueryResult &qr)
{
    out << "element " << qr.sought << " occurs " << (*qr.counter)[qr.sought] << " times." << endl;
    for (auto i : *qr.nr)
    {
        out << "(line " << i << ")" << (*qr.file)[i - 1] << endl;
    }

    return out;
}

void runQueries(ifstream &infile)
{
    TextQuery tq(infile);

    while (true)
    {
        cout << "enter word to lookfor, or q to quit.\n";
        string s;
        if (!(cin >> s) || s == "q")
            break;
        print(cout, tq.query(s));
    }
}

int main(void)
{
    ifstream in("c12.10.cc");
    runQueries(in);
}