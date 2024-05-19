#include <bits/stdc++.h>
using namespace std;

bool solution(string s){
    bool answer = true;
    int yY=0,pP=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='y' || s[i]=='Y' ) yY++;
        if(s[i]=='p' || s[i]=='P' ) pP++;
    }
    if(yY==pP) answer=true;
    else answer=false;
    return answer;
}