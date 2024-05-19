#include<bits/stdc++.h>
using namespace std;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int solution(vector<vector<int> > map){
    int row=map.size(),col=map[0].size();
    vector<vector<int>> dist(row,vector<int>(col,-1));
    queue<pair<int,int>> Q; Q.push({0,0});dist[0][0]=1;
    while(dist[row-1][col-1]==-1){
        if(Q.empty()) return -1;
        auto cur=Q.front(); Q.pop();
        for(int D=0;D<4;++D){
            int nx=cur.first+dx[D],ny=cur.second+dy[D];
            if(nx<0 || nx>=row || ny<0 || ny>=col) continue;
            if(map[nx][ny]==0 || dist[nx][ny]>0) continue;
            dist[nx][ny]=dist[cur.first][cur.second]+1, Q.push({nx,ny});
        }
    }
    return dist[row-1][col-1];
}