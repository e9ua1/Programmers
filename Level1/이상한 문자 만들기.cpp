#include<bits/stdc++.h>
using namespace std;

string solution(string s) {
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(i!=0) cnt++;
        if(s[i]==' ') cnt=1;
        if(cnt%2==0 && s[i]>='a' && s[i]<='z') s[i]-='a'-'A';
        if(cnt%2!=0 && s[i]>='A' && s[i]<='Z') s[i]+='a'-'A';
    }
    return s;
}