#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<string> id, vector<string> rpt, int k) {
    unordered_map<string,int> unM;
    unordered_map<int,set<int>> K;
    int idx=0;
    for(auto& e:id) unM[e]=idx++;
    for(auto& e:rpt){
        stringstream CA(e);
        string a,b; CA>>a>>b;
        K[unM[b]].insert(unM[a]);
    }
    vector<int> ans(id.size());
    for(int i=0;i<idx;++i)
        if(K[i].size()>=k)
            for(auto& e:K[i])
                ans[e]++;
    return ans;
}