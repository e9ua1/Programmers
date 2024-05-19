#include <bits/stdc++.h>
using namespace std;

int solution(int n) {
    int ans = 0;
    vector<bool> tmp(n+1, true);
    for (int i=2; i<=n; i++) {
        if (tmp[i]) {
            for (int j=2; i*j<=n; j++) tmp[i*j] = false;
            ans++;
        }
    }
    return ans;
}