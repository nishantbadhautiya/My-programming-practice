#include <iostream>
using namespace std;
int main()
{
    int amount;
    cout << "Enter the Amount: ";
    cin >> amount;
    switch (1)
    {
    case 1:
    {
        int rs100 = amount / 100;
        amount = amount % 100;
        cout << "Note of 100rs are: " << rs100 << endl;
    }

    case 2:
    {
        int rs50 = amount / 50;
        amount = amount % 50;
        cout << "Note of 50rs are: " << rs50 << endl;
    }
    case 3:
    {
        int rs20 = amount / 20;
        amount = amount % 20;
        cout << "Note of 20rs are: " << rs20 << endl;
    }
    case 4:
    {
        int rs1 = amount / 1;
        // amount = amount % 1;
        cout << "Note of 1rs are: " << rs1 << endl;
    }
    }
    return 0;
}