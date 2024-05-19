#include <bits/stdc++.h>
using namespace std;

int solution(int n) {
    int a[100000];
    a[0]=0,a[1]=1;
    for(int i=2;i<=n;i++) a[i]=(a[i-1]+a[i-2])%1234567;
    return a[n];
}