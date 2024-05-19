#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<int> > land){
    int cnt=land.size();
    for(int i=1;i<cnt;++i){
        land[i][0]+=max({land[i-1][1],land[i-1][2],land[i-1][3]}),land[i][1]+=max({land[i-1][0],land[i-1][2],land[i-1][3]});
        land[i][2]+=max({land[i-1][0],land[i-1][1],land[i-1][3]}),land[i][3]+=max({land[i-1][0],land[i-1][1],land[i-1][2]});
    }
    return *max_element(land[cnt-1].begin(),land[cnt-1].end());
}