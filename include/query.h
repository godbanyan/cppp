#ifndef __QUERY_H
#define __QUERY_H

#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <memory>
#include <map>
#include <set>

using namespace std;

using line_nr = vector<string>::size_type;

class QueryResult {
friend ostream &print(ostream &, const QueryResult &);
public:
    QueryResult(string s, shared_ptr<set<line_nr>> l, shared_ptr<vector<string>> f) 
                : sought(s), lines(l), file(f) {}
    shared_ptr<vector<string>> get_file() {return file;}
    set<line_nr>::iterator begin() { return lines->begin(); }

private:
    string sought;
    shared_ptr<set<line_nr>> lines;
    shared_ptr<vector<string>> file;    
};

class TextQuery {
public:
    TextQuery(ifstream &s);
    QueryResult query(const string &s) const;
private:
    shared_ptr<vector<string>> file;
    map<string, shared_ptr<set<line_nr>>> wm;
};

TextQuery::TextQuery(ifstream &is) : file(new vector<string>)
{
    string text;
    while (getline(is, text)) {
        file->push_back(text);
        int nr = file->size() - 1;
        istringstream line(text);
        string word;
        while (line >> word) {
            auto &lines = wm[word];
            if (!lines)
                lines.reset(new set<line_nr>);
            lines->insert(nr);
        }
    }
}

QueryResult TextQuery::query(const string &s) const
{
    static shared_ptr<set<line_nr>> nodata(new set<line_nr>);
    auto loc = wm.find(s);
    if (loc == wm.end())
        return QueryResult(s, nodata, file);
    else
        return QueryResult(s, loc->second, file);
}

ostream &print(ostream &out, const QueryResult &qr)
{
    out << qr.sought << " occurs " << qr.lines->size() << " times" << endl;
    for (auto &nr : *qr.lines) {
        out << "\t(" << nr + 1 << ") " << (*qr.file)[nr] << endl;
    }

    return out;
}

void runQueries(ifstream &infile)
{
    TextQuery tq(infile);

    while (true) {
        cout << "enter a word to look for, or q to quit: ";
        string s;

        if (!(cin >> s) || s == "q") break;

        print(cout, tq.query(s)) << endl;
    }
}

#endif
