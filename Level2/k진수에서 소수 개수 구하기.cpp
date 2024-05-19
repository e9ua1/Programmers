#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool prim(ll n){
    if(n==0 || n==1) return 0;
    for(ll i=2;i*i<=n;++i)if(n%i==0) return 0;
    return 1;
}
int solution(int n, int k) {
    int step=0;string ans="";ll tmp=0;
    while(n!=0) ans=(char)('0'+n%k)+ans,n/=k;
    for(auto& e:ans){
        if(e=='0') step+=prim(tmp),tmp=0;
        else tmp*=10,tmp+=(e-'0');
    }
    step+=(prim(tmp));
    return step;
}