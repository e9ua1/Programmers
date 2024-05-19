#include <bits/stdc++.h>
using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    vector<pair<char,string>> IBM;
    for(int i=0;i<strings.size();i++) IBM.push_back({strings[i][n],strings[i]});
    sort(IBM.begin(),IBM.end());
    for(auto i:IBM) answer.push_back(i.second);
    return answer;
}