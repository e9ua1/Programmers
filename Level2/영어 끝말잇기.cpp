#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int n, vector<string> wrd) {
    unordered_set<string> S;
    int cnt=wrd.size();
    S.insert(wrd[0]);
    for(int i=1;i<cnt;i++){
        if(wrd[i-1].back()!=wrd[i].front() || !S.insert(wrd[i]).second) return {i%n+1,i/n+1};
        S.insert(wrd[i]);
    }
    return {0,0};
}