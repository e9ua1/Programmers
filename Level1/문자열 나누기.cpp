#include <bits/stdc++.h>
using namespace std;

int solution(string s) {
    int ans = 0,cnt1=0,cnt2=0,cnt=s.size();
    char p=s[0];
    for(int i=0;i<cnt;++i){
        if(p==s[i]) cnt1++;
        else cnt2++;
        if(cnt1==cnt2) ans++,cnt1=0,cnt2=0,p=s[i+1];
    }
    if(cnt2!=cnt1) ans++;
    return ans;
}