#include <bits/stdc++.h>
using namespace std;
int alpa[30];
int solution(string sk, vector<string> skt) {
    int order=1, ans=skt.size();
    for(auto& e:sk) alpa[e-'A']=order++;
    for(auto& e:skt){
        int idx=0;
        for(int i=0;i<e.size();++i){
            if(alpa[e[i]-'A']==0) continue;
            else {
                if(alpa[sk[idx]-'A']<alpa[e[i]-'A']) {--ans; break;}
                else idx++;
            }
        }
    }
    return ans;
}