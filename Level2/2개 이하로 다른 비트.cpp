#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> solution(vector<ll> num) {
    vector<ll> ans;
    for(auto& e : num) {
        if(e % 2 == 0) ans.push_back(e + 1);
        else {
            int idx = 0;
            while((e & (1LL << idx)) != 0) idx++;
            --idx,ans.push_back(e + (1LL << idx));
        }
    }
    return ans;
}