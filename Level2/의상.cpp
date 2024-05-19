#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<string>> clt) {
    int ans = 1,cnt=clt.size();
    unordered_map<string,int> Map;
    for(int i=0;i<cnt;i++) Map[clt[i][1]]++;
    for(auto& e:Map) ans*=(e.second+1);
    return ans-1;
}