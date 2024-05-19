#include<bits/stdc++.h>
using namespace std;

int solution(int num) {
    int cnt = 0;
    long long N=num;
    while(cnt<500){
        if(N==1) return cnt;
        cnt++;
        N%2!=0 ? N=3*N+1 : N/=2;
    }
    return -1;
}