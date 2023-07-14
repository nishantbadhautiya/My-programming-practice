#include <iostream>
using namespace std;
class Employee
{
private:
    static int count;
    int id;

public:
    void setdata(void);
    void getdata(void);
    static void getcount()
    {
        // cout<<id;  // will through an error
        cout << "This is our employee number " << count << endl;
    }
};
void Employee::setdata(void)
{
    cout << "Enter the id of the employee : ";
    cin >> id;
    count++;
}
void Employee ::getdata(void)
{
    cout << "The id of this employee is: " << id << endl;
    // cout<<"This is our employee number "<<count<<endl;
}
int Employee ::count;
int main()
{
    Employee nishant, amit, rahul;
    nishant.setdata();
    nishant.getdata();
    Employee ::getcount();

    amit.setdata();
    amit.getdata();
    Employee ::getcount();

    rahul.setdata();
    rahul.getdata();
    Employee ::getcount();
    return 0;
}