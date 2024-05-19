#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> band, int hp, vector<vector<int>> atak) {
    int ans = hp,cnt=atak.size(),time=band[0],plus=band[1],add=band[2],idx=0,st=0;
    for(int i=1;i<=atak[cnt-1][0];++i){
        if(i==atak[idx][0]){
            ans-=atak[idx++][1];st=0;
            if(ans<=0) return -1;
            else continue;
        }
        ans+plus > hp ? ans=hp:ans+=plus; st++;
        if(time==st) {ans+add > hp ? ans=hp:ans+=add; st=0;}
    }
    return ans;
}