#include<iostream>
#include<stack>
using namespace std;
int main()
{
    string str = "Nishant";
    stack<char> st;
    for(int i = 0; i < str.length(); i++){
        st.push(str[i]);
    }

    string ans = "";
    while(!st.empty()){
        char ch = st.top();
        ans.push_back(ch);
        st.pop();
    }
    cout << "Answer is: " << ans << endl;
    return 0;
}
