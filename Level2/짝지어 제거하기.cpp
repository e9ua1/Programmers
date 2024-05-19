#include<bits/stdc++.h>
using namespace std;

int solution(string s){
    stack<int> st;
    for(int i=0;i<s.size();i++){
        if(st.empty()) {
            st.push(s[i]);
            continue;
        }
        else{
            if(st.top()==s[i]) st.pop();
            else st.push(s[i]);
        }
    }
    return st.empty();
}