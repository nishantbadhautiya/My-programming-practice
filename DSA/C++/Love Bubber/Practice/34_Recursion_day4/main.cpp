#include <bits/stdc++.h>
#include <string.h>
using namespace std;
void reverseString(string name)
{
    int s = 0, e = name.length() - 1;
    int num = e;
    while (s <= e)
    {
        swap(name[s], name[e]);
        s++;
        e--;
    }
    for (int i = 0; i <= num; i++)
    {
        cout << name[i];
    }
    cout << endl;
}

void reverse_using_recursion(string &name, int i, int j)
{
    cout << "Call Received for : " << name << endl;
    // base case
    if (i > j)
    {
        return;
    }

    // processing
    swap(name[i], name[j]);
    // i++;
    // j--;

    // Recursive Call
    reverse_using_recursion(name, ++i, --j);
}

bool check_palindrome(string name)
{
    int s = 0, e = name.length() - 1;
    while (s < e)
    {
        if (name[s++] != name[e--])
        {
            return false;
        }
    }
    return true;
}

bool check_palindrome_using_recursion(string name, int i, int j)
{
    // base case
    if (i > j)
    {
        return true;
    }

    // processing
    if (name[i] != name[j])
    {
        return false;
    }
    else
    {
        // recursive call
        return check_palindrome_using_recursion(name, ++i, --j);
    }
}

int power(int a, int b)
{
    // get the power of a to b
    int ans = 1;
    for (int i = 0; i < b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

int power_using_recursion(int a, int b)
{
    // base case
    if (b == 0)
    {
        return 1;
    }

    if (b == 1)
    {
        return a;
    }

    // recursive relation
    int ans = power(a, b / 2);

    // if b is even
    if (b % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        // if b is odd
        return a * ans * ans;
    }
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void bubble_sort(int *arr, int size)
{
    for (int i = 0; i < size; i++) // for number of passes
    {
        cout << "now my array on " << i << "th pass is:  ";
        print(arr, size);
        for (int j = 0; j < size - i - 1; j++) // placing the largest element to right 
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void bubble_sort_using_recursion(int *arr, int size)
{
    // base case
    if (size == 0 || size == 1)
    {
        return;
    }
    // sorting element for passes
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    // recursive call
    return bubble_sort_using_recursion(arr, size - 1);
}

int main()
{
    string name = "radar";
    // reverseString(name);

    // reverse_using_recursion(name, 0, name.length() - 1);
    // cout << name << endl;

    // bool ans = check_palindrome(name);

    // bool ans = check_palindrome_using_recursion(name, 0, name.length() - 1);

    // int ans = power(2, 6);
    // cout << ans << endl;

    int arr[] = {7, 11, 9, 2, 17, 4};
    print(arr, sizeof(arr) / 4);
    bubble_sort_using_recursion(arr, sizeof(arr) / 4);
    print(arr, sizeof(arr) / 4);

    return 0;
}
