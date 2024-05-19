#include <bits/stdc++.h>
using namespace std;

int solution(int k, int m, vector<int> scr) {
    int ans = 0,cnt=scr.size();
    sort(scr.begin(),scr.end(),greater<int>());
    for(int i=m-1;i<cnt;i+=m) ans+=(m*scr[i]);
    return ans;
}