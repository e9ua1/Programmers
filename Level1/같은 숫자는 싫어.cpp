#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> arr){
    vector<int> answer;
    for(int i:arr) {
        if(answer.empty()) answer.push_back(i);
        if(answer.back() != i) answer.push_back(i);
    }
    return answer;
}