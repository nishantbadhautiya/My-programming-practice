#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main()
{
    ofstream out;
    out.open("sample60.txt");
    out << "This is me with use of open function \n";
    out << "This is me also \n";
    out << "This is me also again";
    out.close();

    ifstream in;
    string st, st2;
    in.open("sample60.txt");
    // in >> st >> st2;
    // getline(in, st);
    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st << endl;
    }

    // cout << st << " " << st2;
    in.close();
    return 0;
}
