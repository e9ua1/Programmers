#include<bits/stdc++.h>
using namespace std;

int solution(vector<int> d, int budget) {
    int C = 0,result=0;
    sort(d.begin(),d.end());
    for(int i:d) if(C+i<=budget) C+=i,result++;
    return result;
}