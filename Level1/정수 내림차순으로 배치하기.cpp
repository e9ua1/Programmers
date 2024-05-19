#include<bits/stdc++.h>
using namespace std;

long long solution(long long n) {
    string S=to_string(n);
    sort(S.begin(),S.end(),greater<>());
    return stoll(S);
}