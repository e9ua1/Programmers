#include<bits/stdc++.h>
using namespace std;

long long solution(long long n) {
    long long ET=round(sqrt(n));
    if(sqrt(n)-ET==0) return (sqrt(n)+1)*(sqrt(n)+1);
    else return -1;
}