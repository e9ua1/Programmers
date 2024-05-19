#include <bits/stdc++.h>
using namespace std;
vector<bool> V1(15),V2(25),V3(25);
int N,step=0;

void Nquen(int cur){
    if(cur==N) step++;
    for(int i=0;i<N;++i){
        if(V1[i]||V2[i+cur]||V3[i-cur+N-1]) continue;
        V1[i]=true,V2[i+cur]=true,V3[i-cur+N-1]=true;
        Nquen(cur+1);
        V1[i]=false,V2[i+cur]=false,V3[N-cur+i-1]=false;
    }
}
int solution(int n) {
    N=n; Nquen(0);
    return step;
}