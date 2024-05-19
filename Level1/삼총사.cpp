#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> N) {
    int answer = 0;
    int cnt=N.size();
    for(int i=0;i<cnt;i++) for(int j=i+1;j<cnt;j++) for(int k=j+1;k<cnt;k++) if(N[i]+N[j]+N[k]==0) answer++;
    return answer;
}