#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<string> nm, vector<int> yrn, vector<vector<string>> pht) {
    vector<int> ans;
    unordered_map<string,int> m;
    for(int i=0;i<nm.size();i++) m[nm[i]]=yrn[i];
    for(auto& grp:pht){
        int tmp=0;
        for(auto& score:grp) tmp+=m[score];
        ans.push_back(tmp);
    }
    return ans;
}