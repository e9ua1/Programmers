#include <bits/stdc++.h>
using namespace std;
int dp[5]={781,156,31,6,1};

int solution(string word) {
    int ans = 0,cnt=word.size();
    for(int i=0;i<cnt;++i){
        if(word[i]=='E') ans+=dp[i];
        else if(word[i]=='I') ans+=(2*dp[i]);
        else if(word[i]=='O') ans+=(3*dp[i]);
        else if(word[i]=='U') ans+=(4*dp[i]);
    }
    return ans+cnt;
}