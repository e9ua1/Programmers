#include <bits/stdc++.h>
using namespace std;

long long solution(int a, int b) {
    if(a==b) return a;
    long long answer = 0;
    bool Val;
    a>b ? Val=true:Val=false;
    if(Val) for(int i=b;i<=a;i++) answer+=i;
    if(!Val) for(int i=a;i<=b;i++) answer+=i;
    return answer;
}