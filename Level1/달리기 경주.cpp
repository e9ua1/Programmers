#include <bits/stdc++.h>
using namespace std;

vector<string> solution(vector<string> ply, vector<string> call) {
    int idx=0;
    unordered_map<string,int> unM;
    vector<string> ans;
    for(auto& e:ply) ans.push_back(e),unM[e]=idx++;
    string tmp1,tmp2;
    for(auto& e:call){
        tmp1=ans[unM[e]],tmp2=ans[unM[e]-1];
        ans[unM[e]]=ans[unM[e]-1],ans[unM[e]-1]=tmp1;
        unM[e]--,unM[tmp2]++;
    }
    return ans;
}