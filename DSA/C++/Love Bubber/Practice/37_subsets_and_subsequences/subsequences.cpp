#include<iostream>
#include<vector>
using namespace std;
void solve(vector<string>& ans, string output, int index, string str){
    // base case
    if(index >= str.length()){
        if(output.length() > 0){
            ans.push_back(output);
        }
        return;
    }

    // exclude
    solve(ans, output, index + 1, str);

    // include
    char element = str[index];
    output.push_back(element);
    solve(ans, output, index + 1, str);
}

vector<string> subsequences(string str){
    vector<string>ans;
    string output = "";
    int index = 0;
    solve(ans, output, index, str);
    return ans;
}
int main()
{
    string str = "abc";
    vector<string> ans = subsequences(str);
    // printing the output
    for (int i = 0; i < ans.size(); i++)
    {
        cout << " \"" ;
            cout << ans[i];
        cout << "\"" ;
    }
    return 0;
}
