#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> pot, int lct) {
    int ans = 0,idx=0;
    queue<pair<int, int>> Q; priority_queue<int> pQ;
    for(auto& e:pot) pQ.push(e),Q.push({e,idx++});
    while(!Q.empty()){
        auto cur=Q.front(); Q.pop();
        if (cur.first == pQ.top()){
            pQ.pop(),++ans;
            if (cur.second == lct) break;
        }else Q.push({cur.first, cur.second});
    }
    return ans;
}