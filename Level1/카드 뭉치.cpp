#include <bits/stdc++.h>
using namespace std;

string solution(vector<string> c1, vector<string> c2, vector<string> goal) {
    int cnt1=c1.size(),cnt2=c2.size(),cnt3=goal.size(),pre1=-1,pre2=-2;
    unordered_map<string,int> m;
    for(int i=0;i<cnt1;++i) m[c1[i]]=2*i+1;
    for(int i=0;i<cnt2;++i) m[c2[i]]=2*i;
    for(int i=0;i<cnt3;++i){
        if(m[goal[i]]%2){
            if(pre1+2!=m[goal[i]]) return "No";
            pre1=m[goal[i]];
        }
        else{
            if(pre2+2!=m[goal[i]]) return "No";
            pre2=m[goal[i]];
        }
    }
    return "Yes";
}