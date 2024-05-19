#include<bits/stdc++.h>
using namespace std;

int solution(int n) {
    int step=0;
    for(int cnt=1;cnt<=n;cnt*=3) step++;
    vector<int> V(step,0);
    int sum=0,i=1;
    while(n){
        if(pow(3,i)>n) {
            n-=pow(3,i-1);sum+=pow(3,step-i);i=1;
        }
        else if(pow(3,i)==n) n-=pow(3,i),sum+=pow(3,step-1-i);
        if(n<3) sum+=n*pow(3,step-1),n=0;
        i++;
    }
    return sum;
}