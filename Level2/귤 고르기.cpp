#include <bits/stdc++.h>
using namespace std;

int solution(int k, vector<int> tang) {
    int ans = 0;
    vector<int> V(*max_element(tang.begin(),tang.end()),0);
    for(auto& t: tang) V[t-1]++;
    sort(V.rbegin(),V.rend());
    for(auto& e: V){
        ans++,k-=e;
        if(k<=0) return ans;
    }
    return ans;
}