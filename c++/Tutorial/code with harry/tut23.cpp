#include <iostream>
using namespace std;
class Shop
{
private:
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    // void countervalue(void)
    // {
    //     counter = 0;
    // }
    void setprice(void);
    void displayprice(void);
};
void Shop::setprice(void)
{
    cout << "enter the ID of " << counter + 1 << "st items: ";
    cin >> itemId[counter];
    cout << "enter the Price of " << counter + 1 << "st items: ";
    cin >> itemPrice[counter];
    counter++;
}
void Shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of id number " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    Shop soap;
    // soap.countervalue();
    for (int i = 0; i < 10; i++)
    {
        soap.setprice();
    }
    soap.displayprice();
    return 0;
}