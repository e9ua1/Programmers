#include <bits/stdc++.h>
#define F first
#define S second
using namespace std;

int solution(vector<int> num, int tgt) {
    int ans = 0,n = num.size();
    queue<pair<int, int>> Q;
    Q.push({num[0], 0}); Q.push({-num[0], 0});
    while (!Q.empty()) {
        auto cur = Q.front(); Q.pop();
        if (cur.S == n - 1 && cur.F == tgt) ans++;
        if (cur.S < n - 1) Q.push({cur.F + num[cur.S + 1], cur.S + 1}),Q.push({cur.F - num[cur.S + 1], cur.S + 1});
    }
    return ans;
}