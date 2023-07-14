// #include <iostream>
// #include <vector>
// using namespace std;
// void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
// {
//     int i = 0;
//     int j = 0;
//     while (i < m && j < n)
//     {
//         if (nums1[i] < nums2[j])
//         {
//             // nums1[i] = nums1[i];
//             i++;
//         }
//         else
//         {
//             int x = i;
//             while (x < m)
//             {
//                 nums1[x + 1] = nums1[x];
//                 x++;
//             }
//             nums1[i] = nums2[j];
//             i++;
//             j++;
//         }
//     }
//     // copy the second array elements into first
//     // while (j < n)
//     // {
//     //     nums1[i] = nums2[j];
//     //     i++;
//     //     j++;
//     // }
// }
// int main()
// {
//     vector<int> v1;
//     v1.push_back(14);
//     v1.push_back(17);
//     v1.push_back(19);
//     v1.push_back(24);
//     v1.push_back(28);

//     vector<int> v2;
//     v2.push_back(5);
//     v2.push_back(12);
//     v2.push_back(32);
//     v2.push_back(52);
//     v2.push_back(78);

//     merge(v1, 10, v2, 5);
//     for (auto i : v1)
//     {
//         cout << i << "   ";
//     }
//     cout << endl;
//     return 0;
// }
