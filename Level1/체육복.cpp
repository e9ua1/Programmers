#include <bits/stdc++.h>
using namespace std;
int univ[31];

int solution(int n, vector<int> lost, vector<int> add) {
    for(auto& e:lost) univ[e]--;
    for(auto& e:add) if(univ[e]==-1) univ[e]+=2;
    for(auto& e:add){
        if(univ[e]==1) {univ[e]--;continue;}
        if(univ[e-1]==-1) {univ[e-1]++;continue;}
        if(univ[e+1]==-1) univ[e+1]++;
    }
    return n+accumulate(univ+1,univ+31,0);
}