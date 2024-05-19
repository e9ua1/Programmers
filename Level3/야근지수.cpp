#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll solution(int n, vector<int> wk) {
    ll ans = 0;
    priority_queue<int> pQ;
    for(auto& e:wk) pQ.push(e);
    while(n--) {
        if(pQ.empty()) return ans;
        int tmp=pQ.top();pQ.pop();
        if(tmp>1) pQ.push(tmp-1);
    }
    while(!pQ.empty()) ans+=(pQ.top()*pQ.top()),pQ.pop();
    return ans;
}