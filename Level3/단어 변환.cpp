#include <bits/stdc++.h>
using namespace std;

int solution(string bgin, string tgt, vector<string> wrd) {
    if(find(wrd.begin(),wrd.end(),tgt)==wrd.end()) return 0;
    int cnt=bgin.size(); queue<pair<string,int>> Q; Q.push({bgin,0});
    while(true){
        auto cur=Q.front();Q.pop();
        if(cur.first==tgt) return cur.second;
        for(auto& e:wrd){
            int step=0,idx=0;
            for(auto& c:e){
                if(cur.first[idx]==c) step++;
                idx++;
            }
            if(cnt-step==1) Q.push({e,cur.second+1}),e="";
        }
    }
}