#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<string> kmp, vector<string> tgt) {
    vector<int> ans,dem(26);
    for(auto& e:kmp)
        for(int i=0;i<e.size();++i)
            if(dem[e[i]-'A']==0)dem[e[i]-'A']=i+1;
            else if(dem[e[i]-'A']>i+1)dem[e[i]-'A']=i+1;
    for(auto& e:tgt){
        int sum=0,F=0;
        for(auto& i:e){
            if(dem[i-'A']==0) {F=1;break;}
            else sum+=dem[i-'A'];
        }
        if(F) ans.push_back(-1);
        else ans.push_back(sum);
    }
    return ans;
}