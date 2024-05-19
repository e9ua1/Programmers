#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

string solution(vector<int> num, string hand) {
    string ans = "";
    pair<int,int> L={3,0},R={3,2};
    vector<pair<int,int>> key; key.push_back({3,1});
    for(int i=0;i<9;++i) key.push_back({i/3,i%3});
    for(auto& e:num){
        if(e==1 || e==4 || e==7) L.x=key[e].x,L.y=key[e].y,ans+='L';
        else if(e==3 || e==6 || e==9) R.x=key[e].x,R.y=key[e].y,ans+='R';
        else {
            int cmp1=abs(key[e].x-L.x)+abs(key[e].y-L.y);
            int cmp2=abs(key[e].x-R.x)+abs(key[e].y-R.y);
            if(cmp1>cmp2) R.x=key[e].x,R.y=key[e].y,ans+='R';
            else if(cmp1<cmp2) L.x=key[e].x,L.y=key[e].y,ans+='L';
            else {
                if(hand=="right") R.x=key[e].x,R.y=key[e].y,ans+='R';
                else L.x=key[e].x,L.y=key[e].y,ans+='L';
            }
        }
    }
    return ans;
}