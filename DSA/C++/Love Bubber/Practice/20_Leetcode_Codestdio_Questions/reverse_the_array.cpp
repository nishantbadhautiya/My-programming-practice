// // #include<iostream>
// // using namespace std;
// // void printArray(int *arr, int size)
// // {
// //     for (int i = 0; i < size; i++)
// //     {
// //         cout<<arr[i] << "  ";
// //     }
// //     cout<<endl;
// // }
// // void reverseArray(int *arr, int size)
// // {
// //     for (int i = 0; i < size/2; i++)
// //     {
// //         //swap arr[i] and arr[size - i - 1];
// //         int temp = arr[i];
// //         arr[i] = arr[size - i - 1];
// //         arr[size - i - 1] = temp;
// //     }
// // }
// // int main()
// // {
// //     int arr[]=  {1,3,2,5, 12};
// //     int size = sizeof(arr)/sizeof(int);
// //     printArray(arr,size);
// //     reverseArray(arr, size);
// //     printArray(arr,size);
// //     return 0;
// // }

// #include <iostream>
// #include <vector>
// using namespace std;
// vector<int> reverse(vector<int> v)
// {
//     // for (int i = 0; i < v.size() / 2; i++)
//     // {
//     //     swap(v[i], v[v.size() - i - 1]);
//     // }
//     // return v;

//     // int s = 0;
//     // int e = v.size() - 1;
//     // while (s <= e)
//     // {
//     //     swap(v[s], v[e]);
//     //     s++;
//     //     e--;
//     // }
//     // return v;

//     int s = 3+1;
//     int e = v.size() - 1;
//     while (s <= e)
//     {
//         swap(v[s], v[e]);
//         s++;
//         e--;
//     }
//     return v;
// }
// int main()
// {
//     vector<int> v;
//     v.push_back(16);
//     v.push_back(18);
//     v.push_back(35);
//     v.push_back(12);
//     v.push_back(71);
//     v.push_back(99);
//     for (auto i : v)
//     {
//         cout << i << "  ";
//     }
//     cout << endl;
//     vector<int> ans = reverse(v);
//     cout << "Printing reverse array: " << endl;
//     for (auto i : ans)
//     {
//         cout << i << "  ";
//     }
//     cout << endl;
//     return 0;
// }















#include <iostream>
#include <vector>
using namespace std;
void printVector(vector<int> v2)
{
    for (auto i : v2)
    {
        cout << i << "  ";
    }
    cout << endl;
}

// vector<int> reverseVector(vector<int> v)
// {
//     int s = 0;
//     int e = v.size() - 1;
//     while (s <= e)
//     {
//         swap(v[s], v[e]);
//         s++;
//         e--;
//     }
//     return v;
// }

vector <int> reverseVector(vector<int>v, int m)
{
    int s = m;
    int e = v.size() - 1;
    while (s <= e)
    {
        swap(v[s] , v[e]);
        s++;
        e--;
    }
    return v;
}

int main()
{
    vector<int> v;
    v.push_back(16);
    v.push_back(18);
    v.push_back(35);
    v.push_back(12);
    v.push_back(71);
    v.push_back(99);
    v.push_back(88);
    printVector(v);
    vector<int>v2 =  reverseVector(v, 4);
    printVector(v2);
    return 0;
}
