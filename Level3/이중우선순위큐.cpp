#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<string> op) {
    multiset<int> ans;
    for(auto& e:op){
        if(e[0]=='I') ans.insert(stoi(e.substr(2,e.size()-2)));
        else {
            if(!ans.empty()){
                if(e[2]=='-') ans.erase(ans.begin());
                else ans.erase(*prev(ans.end()));
            }
        }
    }
    if(ans.empty()) return {0,0};
    else return {*prev(ans.end()),*ans.begin()};
}