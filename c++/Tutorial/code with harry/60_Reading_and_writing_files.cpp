#include <iostream>
#include <fstream>
using namespace std;

// The useful classes for  working with files in c++ are:
// 1> fstreambase
// 2> ifstream
// 3> ofstream

int main()
{
    // Writing in files using constructor
    // string st = "Nishant is programmer ";
    // ofstream out("sample60.txt");
    // out<<st;

    // Reading files using constructor
    string st2;
    ifstream in("sample60.txt");
    // in >> st2;
    getline(in, st2);
    getline(in, st2);
    getline(in, st2);

    cout << st2;
}
