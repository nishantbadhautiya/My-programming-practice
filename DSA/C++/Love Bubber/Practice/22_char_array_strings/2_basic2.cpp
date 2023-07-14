#include <iostream>
using namespace std;
int stringLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[34];
    cout << "Enter the name: ";
    cin >> name;
    int result = stringLength(name);
    cout << result << endl;
    return 0;
}
