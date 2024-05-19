#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int k, vector<int> scr) {
    int idx=0; vector<int> ans;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(auto& e:scr){
        if((idx++)>=k) {
            if(pq.top()<e) pq.pop(),pq.push(e);
            ans.push_back(pq.top());
        }
        else pq.push(e),ans.push_back(pq.top());
    }
    return ans;
}