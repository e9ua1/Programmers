#include <bits/stdc++.h>
#define PB push_back
using namespace std;

vector<int> solution(int n, int s) {
    vector<int> ans; int cnt=s/n, rem=s%n;
    if(cnt==0) return {-1};
    for(int i=0;i<n-rem;++i) ans.PB(cnt);
    for(int i=0;i<rem;++i) ans.PB(cnt+1);
    return ans;
}