#include <bits/stdc++.h>
using namespace std;

int solution(string t, string p) {
    int ans = 0,sz=p.size(),cnt=(int)t.size();
    for(int i=0;i<cnt-sz+1;++i) if(t.substr(i,sz)<=p) ans++;
    return ans;
}