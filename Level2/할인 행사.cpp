#include <bits/stdc++.h>
using namespace std;

int solution(vector<string> want, vector<int> num, vector<string> dis) {
    int ans = 0,idx=0,cnt=dis.size();
    unordered_map<string,int> unM,dymic;
    for(auto& e:want) unM[e]=num[idx++];
    for(int i=0;i<cnt;++i){
        dymic[dis[i]]++;
        if(i>=10) dymic[dis[i-10]]--;
        int step=want.size();
        for(auto& e:want) if(dymic[e]>=unM[e]) step--;
        if(step==0) ans++;
    }
    return ans;
}