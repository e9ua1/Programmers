#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> tpg) {
    int ans = 0,cnt=tpg.size(); vector<int> prfix(cnt),rvfix(cnt); unordered_set<int> unS,rvS;
    for(int i=0;i<cnt;++i)
        unS.insert(tpg[i]), rvS.insert(tpg[cnt-1-i]),prfix[i]=unS.size(),rvfix[cnt-1-i]=rvS.size();
    for(int i=0;i<cnt-1;++i) if(prfix[i]==rvfix[i+1]) ans++;
    return ans;
}