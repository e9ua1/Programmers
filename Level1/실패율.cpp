#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<double,int>& a,pair<double,int>& b){
    if(a.first!=b.first) return a.first>b.first;
    return a.second<b.second;
}
vector<int> solution(int N, vector<int> stg) {
    int VS[505]={0},div=stg.size();
    vector<int> ans;
    vector<pair<double,int>> Vec;
    for(auto& e:stg) VS[e]++;
    for(int i=1;i<=N;++i){
        if(!VS[i]) Vec.push_back({0,i});
        else Vec.push_back({VS[i]/(double)div,i}),div-=VS[i];
    }
    sort(Vec.begin(),Vec.end(),cmp);
    for(auto& i: Vec) ans.push_back(i.second);
    return ans;
}