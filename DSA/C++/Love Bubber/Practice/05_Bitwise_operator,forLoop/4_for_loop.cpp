// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     cout << "Printin counting from 1 to " << n << endl;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << i << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     cout << "Printing counting from 1 to " << n << endl;
//     int i = 1;
//     for (;;)
//     {
//         if (i <= n)
//         {
//             cout << i << endl;
//         }
//         else
//             break;
//         i++;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int a = 0, b = 1, c = 3; a >= 0 && b >= 1 && c <= 3; a--, b--)
//     {
//         cout << a << "   " << b << "   " << c << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int num;
//     cout<<"Enter the Number: ";
//     cin>>num;
//     int sum = 0;
//     for (int i = 1; i <= num; i++)
//     {
//         // sum = sum+i;
//         sum += i;
//     }
//     cout<<sum<<endl;
//     return 0;
// }

// fibonacci series
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout << "Enter the Number: ";
//     cin >> num;
//     int a = 0;
//     int b = 1;
//     cout << a << " " << b << " ";
//     for (int i = 0; i < num-2; i++)
//     {
//         int sum = a + b;
//         cout << sum << " ";
//         a = b;
//         b = sum;
//     }
//     return 0;
// }

// Prime Number
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout << "Enter the Number: ";
//     cin >> num;
//     bool isPrime = 1;
//     for (int i = 2; i < num; i++)
//     {
//         if (num % i == 0)
//         {
//             isPrime = 0;
//             break;
//         }
//     }
//     if (isPrime)
//     {
//         cout << num << " is a Prime Number" << endl;
//     }
//     else
//     {
//         cout << num << " is not a Prime Number" << endl;
//     }
//     return 0;
// }

// continue in c++
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout << "Enter the Number: ";
//     cin >> num;
//     for (int i = 1; i <= num; i++)
//     {
//         cout<<"Hii  ";
//         cout<<"Hello"<<endl;
//         continue;
//         cout<<"Reply me"<<endl;
//     }
//     return 0;
// }