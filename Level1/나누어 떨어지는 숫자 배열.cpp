#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for(auto i:arr) if(i%divisor==0) answer.push_back(i);
    sort(answer.begin(),answer.end());
    return answer.empty() ? vector<int>(1,-1): answer;
}