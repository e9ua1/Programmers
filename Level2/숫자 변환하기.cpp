#include <bits/stdc++.h>
using namespace std;

int solution(int x, int y, int n) {
    if(y<x) return -1;
    vector<int> dist(1000001,-1); dist[x]=0; queue<int> Q; Q.push(x);
    while(dist[y]==-1){
        if(Q.empty()) return -1;
        int cur=Q.front(); Q.pop();
        for(int nx : {3*cur,2*cur,cur+n}){
            if(nx<1 || nx>1000000 || dist[nx]!=-1) continue;
            dist[nx]=dist[cur]+1,Q.push(nx);
        }
    }return dist[y];
}