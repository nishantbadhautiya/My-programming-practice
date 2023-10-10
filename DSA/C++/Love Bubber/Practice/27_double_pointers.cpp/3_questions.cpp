// QUESTION 1

// #include <iostream>
// using namespace std;
// int main()
// {
//     int first = 8;
//     int second = 18;
//     int *ptr = &second;
//     *ptr = 9;
//     cout << first << " " << second << endl; // 8  9
//     return 0;
// }

// QUESTION 2

// #include <iostream>
// using namespace std;
// int main()
// {
//     int first = 6;
//     int *p = &first;
//     int *q = p;
//     (*q)++;
//     cout << first << endl;
//     return 0;
// }

// QUESTION 3

// #include<iostream>
// using namespace std;
// int main()
// {
//     int first = 8;
//     int *p = &first;
//     cout << (*p)++  << " " ;  // 8
//     cout << first << endl;   // 9
//     return 0;
// }

// QUESTION 4

// #include <iostream>
// using namespace std;
// int main()
// {
//     int *p = 0;
//     int first = 110;
//     // *p = first;
//     p = &first;
//     cout << *p << endl;
//     return 0;
// }

// QUESTION 5

// #include<iostream>
// using namespace std;
// int main()
// {
//     int first = 8;
//     int second = 11;
//     int *third = &second;
//     first = *third;
//     *third = *third  + 2;
//     cout << first << " " << second << endl;
//     return 0;
// }

// QUESTION 6

// #include<iostream>
// using namespace std;
// int main()
// {
//     float f = 12.5;
//     float p = 21.5;
//     float *ptr = &f;
//     (*ptr) ++ ;
//     *ptr = p;
//     cout << *ptr << " " << f << " " << p << endl; // 21.5 21.5 21.5
//     return 0;
// }

// QUESTION 7

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5];
//     int *ptr;
//     cout << sizeof(arr) << " " << sizeof(ptr) << endl;  // 20 4
//     return 0;
// }

// QUESTION 8

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {11, 21, 13, 14};
//     cout << *(arr) << " " << *(arr + 1) << endl;  // 11  21
//     return 0;
// }

// QUESTION 9

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {11, 12, 31};
//     cout << arr << " " << &arr << endl;
//     return 0;
// }

// QUESTION 10

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[6] = {11, 21, 31};
//     int *p = arr;
//     cout << p[2] << endl;  // output = 31  because p[2] = *(p + 2)
//     return 0;
// }

// QUESTION 11

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5] = {11, 21, 31, 41};
//     int *ptr = arr++;  // arr can not be update in symbol table
//     cout << *ptr << endl;
//     return 0;
// }

// QUESTION 12

// #include <iostream>
// using namespace std;
// int main()
// {
//     char ch = 'a';
//     char *ptr = &ch;
//     cout << *ptr << endl; // 'a'
//     ch++;
//     cout << ch << endl;  // 'b'
//     cout << *ptr << endl;  // 'b'
//     return 0;
// }

// QUESTION 13

// #include <iostream>
// using namespace std;
// int main()
// {
//     char arr[] = "abcde";
//     char *p = &arr[0];
//     cout << &arr[0] << endl; // abcde
//     cout << *p << endl; // a
//     cout << p << endl; // abcde
//     return 0;
// }

// QUESTION 14

// #include <iostream>
// using namespace std;
// int main()
// {
//     char arr[] = "abcde";
//     char *p = &arr[0];
//     // p++;
//     // p++;
//     // p++;
//     p = p + 4;
//     cout << p << endl;
//     return 0;
// }

// QUESTION 15

// #include<iostream>
// using namespace std;
// int main()
// {
//     char str[] = "babber";
//     char *p = str;
//     cout << str[0] << " " << p[0] << endl;  // b  b
//     return 0;
// }

// QUESTION 16

// #include <iostream>
// using namespace std;
// void update(int *p)
// {
//     *p = (*p) * 2;
// }
// int main()
// {
//     int i = 10;
//     update(&i);
//     cout << i << endl;
//     return 0;
// }

// QUESTION 17

// #include <iostream>
// using namespace std;
// int main()
// {
//     int first = 110;
//     int *p = &first;
//     int **q = &p;
//     int second = (**q)++ + 9;
//     cout << first << " " << second << endl; // 111  119
//     return 0;
// }


// QUESTION 18

// #include<iostream>
// using namespace std;
// int main()
// {
//     int first = 110;
//     int *p = &first;
//     int **q = &p;
//     int second  = ++(**q);
//     int *r = *q;
//     ++(*r);
//     cout << first << " " << second << endl;  // 111 119
//     return 0;
// }


// QUESTION 19

// #include<iostream>
// using namespace std;
// void increament(int **p) {
//     ++(**p);
// }
// int main()
// {
//     int num = 110;
//     int *ptr = &num;
//     increament(&ptr);
//     cout << num << endl;  // 111
//     return 0;
// }
