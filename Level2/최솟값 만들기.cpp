#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> A, vector<int> B){
    sort(A.begin(),A.end());
    sort(B.begin(),B.end(),greater<int>());
    long long total=0;
    for(int i=0;i<A.size();i++) total+=A[i]*B[i];
    return total;
}