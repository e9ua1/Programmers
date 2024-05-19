#include <bits/stdc++.h>
#define PB push_back
using namespace std;

vector<int> solution(vector<int> lot, vector<int> win) {
    vector<int> ans; vector<bool> N(46);
    int step=0,M=0;
    for(auto& e:win) N[e]=1;
    for(auto& e:lot){
        if(e==0) step++;
        else M+=N[e];
    }
    7-M-step<1 ? ans.PB(1):ans.PB(7-M-step-(7-M-step>6));
    7-M>=6 ? ans.PB(6):ans.PB(7-M);
    return ans;
}