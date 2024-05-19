#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> scv, int K) {
    int ans = 0,tmp1;
    priority_queue<int,vector<int>,greater<int>> pQ(scv.begin(),scv.end());
    while(pQ.size()>1){
        tmp1=pQ.top(); pQ.pop();
        if(tmp1>=K) break;
        pQ.push(tmp1+pQ.top()*2); pQ.pop(); ans++;
    }
    if(pQ.top()<K) return -1;
    return ans;
}