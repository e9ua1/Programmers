#include<bits/stdc++.h>
using namespace std;

bool solution(int x) {
    string S=to_string(x);
    int sum=0;
    for(auto i:S) sum+=i-'0';
    return x%sum ? false: true;
}