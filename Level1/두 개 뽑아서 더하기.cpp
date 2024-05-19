#include<bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> N) {
    set<int> SAT;
    vector<int> answer;
    for(int i=0;i<N.size();++i)
        for(int j=i+1;j<N.size();++j)
            SAT.insert(N[i]+N[j]);
    answer.assign(SAT.begin(),SAT.end());
    return answer;
}