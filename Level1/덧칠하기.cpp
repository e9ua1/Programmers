#include <bits/stdc++.h>
using namespace std;

int solution(int n, int m, vector<int> paint) {
    int ans = 0,pre=paint[0]; m--;
    for(auto& e:paint) if(e-pre>m)ans++,pre=e;
    return ans+1;
}