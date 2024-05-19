#include<bits/stdc++.h>
using namespace std;

int solution(int n){
    int answer = 0;
    string S=to_string(n);
    for(int i=0;i<S.size();i++) answer+=S[i]-'0';
    return answer;
}