// Question 1
// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 0; i <= 5; i++)
//     {
//         cout << i << " ";
//         i++;
//     }
//     return 0;
// }

// Question 2
// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 0; i <= 5; i--)
//     {
//         cout << i << " ";
//         i++;
//     }
//     return 0;
// }

// Question 3                                                //-----> To be Solve
#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 15; i += 2)
    {
        cout << i << " ";
        if (i & 1)
        {
            continue;
        }
        i++;
    }
    return 0;
}

// Question 4
// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = i; j <= 5; j++)
//         {
//             cout << i << " " << j << endl;
//         }
//     }
//     return 0;
// }

// Question 5
// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = i; j <= 5; j++)
//         {
//             if (i + j == 10)
//             {
//                 break;
//             }
//             cout << i << " " << j << endl;
//         }
//     }
//     return 0;
// }