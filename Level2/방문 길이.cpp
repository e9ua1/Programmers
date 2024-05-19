#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int solution(string dir) {
    int ans = 0; pair<int,int> cur = {5, 5};
    set<pair<pair<int,int>, pair<int,int>>> vs;
    for (char d : dir) {
        pair<int,int> nxt = cur;
        if (d == 'U') nxt.X--;
        else if (d == 'D') nxt.X++;
        else if (d == 'R') nxt.Y++;
        else nxt.Y--;
        if (nxt.X < 0 || nxt.X > 10 || nxt.Y < 0 || nxt.Y > 10) continue;
        if (vs.find({cur, nxt}) == vs.end() && vs.find({nxt, cur}) == vs.end())
            vs.insert({cur, nxt}),vs.insert({nxt, cur}),ans++;
        cur = nxt;
    }return ans;
}
