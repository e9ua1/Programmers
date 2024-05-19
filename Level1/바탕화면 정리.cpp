#include <bits/stdc++.h>
#define PB push_back
using namespace std;

vector<int> solution(vector<string> wall) {
    vector<int> ans;
    int stX=100,stY=100,enX=-1,enY=-1,cnt1=wall.size(),cnt2=wall[0].size();
    for(int i=0;i<cnt1;++i)
        for(int j=0;j<cnt2;++j)
            if(wall[i][j]=='#') stX=min(i,stX),stY=min(j,stY),enX=max(i+1,enX),enY=max(j+1,enY);
    ans.PB(stX);ans.PB(stY);ans.PB(enX);ans.PB(enY);
    return ans;
}