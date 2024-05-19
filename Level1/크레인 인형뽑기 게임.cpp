#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> brd, vector<int> mv) {
    int ans = 0,cnt=brd.size();
    stack<int> st;
    for(auto& e: mv){
        for(int i=0;i<cnt;++i){
            if(brd[i][e-1]!=0){
                if(!st.empty() && st.top()==brd[i][e-1]) ans+=2,st.pop();
                else st.push(brd[i][e-1]);
                brd[i][e-1]=0; break;
            }
        }
    }
    return ans;
}