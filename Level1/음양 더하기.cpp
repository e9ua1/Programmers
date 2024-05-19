#include<bits/stdc++.h>
using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int sum=0;
    for(int i=0;i<absolutes.size();i++) if(!signs[i]) absolutes[i]*=-1;
    for(auto i:absolutes) sum+=i;
    return sum;
}