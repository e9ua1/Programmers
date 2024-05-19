#include <bits/stdc++.h>
using namespace std;

string solution(string s) {
    string tmp = "";
    for(int i=0;i<s.size();i++){
        if(i==0 || tmp.back()==' ') {
            if(s[i]>='a' && s[i]<='z') tmp+=(s[i]+'C'-'c');
            else tmp+=s[i];
            continue;
        }
        else{
            if(s[i]==' ') tmp+=' ';
            else{
                if(s[i]>='A' && s[i]<='Z') tmp+=(s[i]+'a'-'A');
                else tmp+=s[i];
            }
        }
    }
    return tmp;
}