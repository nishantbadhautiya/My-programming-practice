// #include <iostream>
// using namespace std;
// void dummy(int *num)
// {
//     (*num)++;
//     cout << "the value of dummy is: " << (*num) << endl;
// }
// int main()
// {
//     int num;
//     cout << "Enter Number: ";
//     cin >> num;
//     cout << "Number is: " << num << endl;
//     dummy(&num);
//     cout << "Number is: " << num << endl;
//     return 0;
// }




#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    a = 10;
    b = 15;
    swap(&a, &b);
    cout << a << " " << b << endl;
    return 0;
}