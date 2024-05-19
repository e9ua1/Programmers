#include <bits/stdc++.h>
#define F first
#define S second
using namespace std;
pair<int,int> dp[10];

string solution(string X, string Y) {
    string ans = "";
    for(auto& e:X) dp[e-'0'].F++; for(auto& e:Y) dp[e-'0'].S++;
    for(int i=9;i>0;--i){
        int cnt=min(dp[i].F,dp[i].S);
        while(cnt--) ans+=('0'+i);
    }
    if(ans.empty()) {
        if(dp[0].F>0 && dp[0].S>0) return "0";
        else return "-1";
    }
    else{
        int cnt=min(dp[0].F,dp[0].S);
        while(cnt--) ans+='0';
        return ans;
    }
}