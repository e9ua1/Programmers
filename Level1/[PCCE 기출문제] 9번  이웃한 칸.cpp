#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<string>> brd, int h, int w) {
    int ans = 0,row=brd.size(),col=brd[0].size(),nx=h,ny=w; string clr=brd[h][w];
    for(int i=0;i<4;++i){
        if(i%2) ny=w+2-i,nx=h;
        else nx=h-1+i,ny=w;
        if(nx<0 || nx>=row || ny<0 || ny>=col || brd[nx][ny]!=clr) continue;
        ans++;
    }
    return ans;
}