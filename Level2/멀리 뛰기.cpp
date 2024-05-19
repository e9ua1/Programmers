#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll DP[2002];

ll solution(int n) {
    DP[1]=1,DP[2]=2;
    for(int i=3;i<=n;i++) DP[i]=(DP[i-2]+DP[i-1])%1234567;
    return DP[n];
}