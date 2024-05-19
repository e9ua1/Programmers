#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> prg, vector<int> spd) {
    vector<int> ans;
    int idx=0;
    for(auto& e:prg)e=((99-e)/spd[idx]+1);
    int max=prg[0],step=0,cnt=prg.size();
    for(int i=1;i<cnt;++i){
        if(max>=prg[i])step++;
        else max=prg[i],ans.push_back(step+1),step=0;
    }
    if(step==0) ans.push_back(1);
    else ans.push_back(step+1);
    return ans;
}