#include <bits/stdc++.h>
using namespace std;
int T[3][10]={{1, 2, 3, 4, 5},{ 2, 1, 2, 3, 2, 4, 2, 5},{3, 3, 1, 1, 2, 2, 4, 4, 5, 5}};
pair<int,int> ans[3];

vector<int> solution(vector<int> IN) {
    vector<int> OUT;
    ans[0].second=1,ans[1].second=2,ans[2].second=3;
    for(int i=0;i<IN.size();i++){
        if(T[0][i%5]==IN[i]) ans[0].first++;
        if(T[1][i%8]==IN[i]) ans[1].first++;
        if(T[2][i%10]==IN[i]) ans[2].first++;
    }
    sort(ans,ans+3,greater<>());
    int V=ans[0].first;
    for(auto& e:ans){
        if(V!=e.first) break;
        OUT.push_back(e.second);
    }
    sort(OUT.begin(),OUT.end());
    return OUT;
}