#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string name;
    cout<<"Enter your Name: ";
    cin>>name;
    ofstream out("sample60.txt");
    out<<name<< " is my name";
    out.close();


    string st2;
    ifstream in("sample60.txt");
    // in>>st2;
    getline(in, st2);
    cout<<st2<<endl;
    // cout<<"The value of st2 is: "<<st2;
}