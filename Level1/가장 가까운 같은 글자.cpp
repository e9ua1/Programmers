#include<bits/stdc++.h>
using namespace std;
int pos[30];

vector<int> solution(string s) {
    vector<int> answer;
    for(int i=0;i<s.size();++i){
        int ele=s[i]-'a'+1;
        if(!pos[ele]) pos[ele]=i+1,answer.push_back(-1);
        else answer.push_back(i+1-pos[ele]),pos[ele]=i+1;
    }
    return answer;
}