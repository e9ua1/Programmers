#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> order) {
    int idx=0,sz=order.size(); stack<int> st;
    for(int i=1;i<=sz;++i){
        st.push(i);
        while(!st.empty() && st.top()==order[idx]){idx++,st.pop();}
    }
    return idx;
}