// Question 1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b = 19;
//     a = 10;
//     if (++a)
//         cout << b;
//     else
//         cout << ++b;
//     return 0;
// }

// Question 2
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 1;
//     int b = 2;
//     if (a-- > 0 && ++b > 2)
//     {
//         cout << "Stage1 - inside if";
//     }
//     else
//     {
//         cout << "Stage2 - inside else";
//     }
//     cout << endl;
//     cout << a << " " << b << endl;
//     return 0;
// }

// Question 3
#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int b = 2;
    if (a-- > 0 || ++b > 2)
    {
        cout << "Stage1 - inside if";
    }
    else
    {
        cout << "Stage2 - inside else";
    }
    cout << endl;
    cout << a << " " << b << endl;
    return 0;
}

// Question 4
// #include <iostream>
// using namespace std;

// int main()
// {
//     int number = 3;
//     cout << (25 * (++number));
//     return 0;
// }

// Question 5
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 1;
//     int b = a++;
//     int c = ++a;
//     cout << b << endl;
//     cout << c << endl;
//     return 0;
// }