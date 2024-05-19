#include <bits/stdc++.h>
using namespace std;

bool cmp(const string& a,const string& b){
    return (a + b) > (b + a);
}
string solution(vector<int> num) {
    string ans = ""; vector<string> OK;
    for(auto& e:num) OK.push_back(to_string(e));
    sort(OK.begin(),OK.end(),cmp);
    if(*OK.begin()=="0") return "0";
    for(auto& e:OK) ans+=e;
    return ans;
}