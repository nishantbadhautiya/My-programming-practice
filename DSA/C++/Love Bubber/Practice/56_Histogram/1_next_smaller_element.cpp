#include <iostream>
#include <vector>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr)
{
    // Time Complexicity = O(n^2)
    int n = arr.size();
    vector<int> result(n, -1); // Initialize answer array with -1

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                result[i] = arr[j];
                break;
            }
        }
    }
    return result;
}

#include <stack>
vector<int> approach2_using_stack(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    for (int i = n - 1; i >= 0; i--)
    {
        int curr = arr[i];
        while (s.top() >= curr)
        {
            s.pop();
        }
        // s.top is my ans
        ans[i] = s.top();
        s.push(curr);
    }
    return ans;
}

vector<int> prev_smaller_element(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        while (s.top() >= curr)
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(curr);
    }
    return ans;
}

int main()
{
    // Example usage
    vector<vector<int>> testCases = {
        {2, 1, 4, 3},
        {1, 3, 2}};
    for (auto &testCase : testCases)
    {
        vector<int> result = nextSmallerElement(testCase);
        for (int val : result)
        {
            cout << val << "  ";
        }
        cout << endl;
    }


    vector<int> approach2 = {2, 1, 4, 3};
    vector<int> ans = prev_smaller_element(approach2, 4);
    for(auto i : ans){
        cout << i << "  ";
    }
    cout << endl;

    return 0;
}
