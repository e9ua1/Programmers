#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int>& a, pair<int, int>& b) {
    return a.second > b.second;
}
vector<int> solution(string s) {
    vector<int> ans;
    unordered_map<int, int> Map;
    for(int i=1;i<(int)s.size()-1;i++){
        if(!isdigit(s[i])) continue;
        else {
            int tmp=s[i]-'0';
            while(isdigit(s[++i])) tmp*=10,tmp+=s[i]-'0';
            Map[tmp]++;
        }
    }
    vector<pair<int, int>> frq(Map.begin(), Map.end());
    sort(frq.begin(), frq.end(), cmp);
    for (auto& e : frq) ans.push_back(e.first);
    return ans;
}