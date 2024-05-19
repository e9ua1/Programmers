#include <bits/stdc++.h>
#define PB push_back
using namespace std;
bool used[200];
vector<int> adj[200];

void bfs(int st){
    queue<int> Q;
    Q.push(st),used[st]=1;
    while(!Q.empty()){
        auto cur = Q.front();Q.pop();
        for(auto& e: adj[cur]){
            if(used[e]) continue;
            Q.push(e),used[e]=1;
        }
    }
}

int solution(int n, vector<vector<int>> cpt) {
    int ans = 0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(cpt[i][j]) adj[i].PB(j),adj[j].PB(i);
    for(int i=0;i<n;i++){
        if(used[i])continue;
        bfs(i),ans++;
    }
    return ans;
}