#include <iostream>
#include <string>
using namespace std;
class Binary
{
private:
    string s;
    void check_binary(void);

public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};
void Binary::read(void)
{
    cout << "Enter the Binary number: ";
    cin >> s;
}
void Binary::check_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Invalid binary format" << endl;
            exit(0);
        }
    }
}
void Binary::ones_compliment(void)
{
    check_binary();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void Binary ::display(void)
{
    cout << "Displaying your binary number: " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{
    Binary b;
    b.read();
    // b.check_binary();
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}
