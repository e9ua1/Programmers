#include<bits/stdc++.h>
using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int max=1;
    for(int i=1;i<=n;i++) if(n%i==0 && m%i==0) max=i;
    answer.push_back(max);
    answer.push_back(n*m/max);
    return answer;
}