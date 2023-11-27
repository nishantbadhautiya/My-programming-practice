/*
// https://www.codingninjas.com/studio/problems/minimum-cost-to-make-string-valid_1115770?leftPanelTabValue=SUBMISSION



#include <bits/stdc++.h> 
int findMinimumCost(string str) {
  if(str.length() % 2 == 1){
    return -1;
  }
  stack<char> st;
  // if there is any valid expression 
  for(int i = 0; i < str.length(); i++){
    if(str[i] == '{'){
      st.push(str[i]);
    }
    else{
      if(!st.empty() && st.top() == '{'){
        st.pop();
      }
      else{
        st.push(str[i]);
      }
    }
  }
  // return the minimum cost to make string valid
  int a = 0, b = 0;
  while(!st.empty()){
    if(st.top() == '{'){
      a++;
    }
    else{
      b++;
    }
    st.pop();
  }
  int ans = (a + 1) / 2 + (b + 1) / 2;
  return ans;
}



*/

