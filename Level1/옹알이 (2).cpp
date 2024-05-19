#include <bits/stdc++.h>
using namespace std;

int solution(vector<string> bab) {
    int ans = 0;
    for(auto& e:bab){
        int idx=0; string pre;
        while((e.begin()+idx)!=e.end()){
            if(e.substr(idx,3)=="aya" && pre!="aya"){idx+=3,pre="aya";}
            else if(e.substr(idx,3)=="woo" && pre!="woo"){idx+=3,pre="woo";}
            else if(e.substr(idx,2)=="ma" && pre!="ma"){idx+=2,pre="ma";}
            else if(e.substr(idx,2)=="ye" && pre!="ye"){idx+=2,pre="ye";}
            else break;
        }
        if(idx==e.size()) ans++;
    }
    return ans;
}