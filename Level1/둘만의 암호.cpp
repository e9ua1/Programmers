#include <bits/stdc++.h>
using namespace std;

string solution(string s, string skip, int idx) {
    string ans = "";
    unordered_set<char> unS;
    vector<char> cycle;
    for(auto& e:skip) unS.insert(e);
    for(int i=0;i<26;++i) if(unS.find('a'+i)==unS.end()) cycle.push_back('a'+i);
    int MOD=cycle.size();
    for(auto& e:s)
        for(int i=0;i<MOD;++i) if(e==cycle[i]){ans+=cycle[(i+idx)%MOD];break;}
    return ans;
}