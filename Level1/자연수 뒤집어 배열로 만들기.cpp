#include<bits/stdc++.h>
using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    string S=to_string(n);
    for(int i=S.size();i>0;i--) answer.push_back(S[i-1]-'0');
    return answer;
}