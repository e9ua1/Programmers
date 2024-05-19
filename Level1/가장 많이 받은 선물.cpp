#include <bits/stdc++.h>
using namespace std;

int solution(vector<string> frd, vector<string> gif) {
    int cnt=frd.size(),idx=0;
    unordered_map<string,int> m;
    for(auto& e:frd) m[e]=idx++;
    vector<int> p(cnt);
    vector<vector<int>> Vec(cnt,vector<int>(cnt));
    for(auto& e:gif) {
        int x,y,step=e.size();
        for(int i=0;i<step;++i){
            if(e[i]==' '){
                x=m[e.substr(0,i)]; y=m[e.substr(i+1,step-i-1)];
                Vec[x][y]++; p[x]++,p[y]--;
                break;
            }
        }
    }
    vector<int> ans(cnt);
    for(int i=0;i<cnt;++i){
        for(int j=i+1;j<cnt;++j){
            if(Vec[i][j]>Vec[j][i]) ans[i]++;
            else if(Vec[j][i]>Vec[i][j]) ans[j]++;
            else {
                if(p[i]>p[j]) ans[i]++;
                else if(p[j]>p[i]) ans[j]++;
            }
        }
    }
    return *max_element(ans.begin(),ans.end());
}