#include<bits/stdc++.h>
using namespace std;

string solution(string phone_number) {
    int cnt=phone_number.size();
    string answer = "";
    for(int i=0;i<cnt;i++){
        if(i<cnt-4) answer.push_back('*');
        else answer.push_back(phone_number[i]);
    }
    return answer;
}