#include <bits/stdc++.h>

using namespace std;
int DP[500];
int solution(vector<vector<int>> tg) {
    int cnt=(int)tg.size();
    for(int i=cnt-1;i>=0;--i){
        for(int j=0;j<tg[i].size();++j){
            if(i==cnt-1){DP[j]=tg[i][j]; continue;}
            if(DP[j]<=DP[j+1]) DP[j]=tg[i][j]+DP[j+1];
            else DP[j]+=tg[i][j];
        }
    }
    return DP[0];
}