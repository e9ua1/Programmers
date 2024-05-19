#include <bits/stdc++.h>
using namespace std;

string solution(vector<string> svy, vector<int> cho) {
    int idx=0;
    unordered_map<char,int> unM;
    for(auto& e:svy){
        if(cho[idx]==4) {idx++; continue;}
        if(cho[idx]<4) unM[e[0]]+=(4-cho[idx++]);
        else unM[e[1]]+=(cho[idx++]-4);
    }
    string ans = "";
    if(unM['R']>=unM['T']) ans+='R';
    else ans+='T';
    if(unM['C']>=unM['F']) ans+='C';
    else ans+='F';
    if(unM['J']>=unM['M']) ans+='J';
    else ans+='M';
    if(unM['A']>=unM['N']) ans+='A';
    else ans+='N';
    return ans;
}