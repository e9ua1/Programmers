#include<bits/stdc++.h>
using namespace std;

int solution(string s) {
    string S="";
    for(int i=0;i<s.size();i++){
        if(s[i]>='0' && s[i]<='9'){S+=s[i];continue;}
        else if(s[i]=='z') S+='0',i+=3;
        else if(s[i]=='o') S+='1',i+=2;
        else if(s[i]=='t' && s[i+1]=='w') S+='2',i+=2;
        else if(s[i]=='t' && s[i+1]=='h') S+='3',i+=4;
        else if(s[i]=='f' && s[i+1]=='o') S+='4',i+=3;
        else if(s[i]=='f' && s[i+1]=='i') S+='5',i+=3;
        else if(s[i]=='s'&& s[i+1]=='i') S+='6',i+=2;
        else if(s[i]=='s'&& s[i+1]=='e') S+='7',i+=4;
        else if(s[i]=='e') S+='8',i+=4;
        else S+='9',i+=3;
    }
    return stoi(S);
}