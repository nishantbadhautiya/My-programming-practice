#include <iostream>
using namespace std;

string yes_or_no(string str){
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = tolower(str[i]);
    }
    if(str == "yes"){
        return "YES";
    }
    else{
        return "NO";
    }
}

int main(){
    int t;
    cin >> t;
    string str;
    while(t--){
        cin >> str;
        string ans = yes_or_no(str);
        cout << ans << endl;
    }
    return 0;
}
