#include<bits/stdc++.h>
using namespace std;

string solution(string s, int n) {
    string answer = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') answer += ' ';
        else {
            char Add;
            int Cir='z'-'a'+1;
            if (isupper(s[i])) Add = 'A' + (s[i] - 'A' + n) % Cir;
            else  Add = 'a' + (s[i] - 'a' + n) % Cir;
            answer += Add;
        }
    }
    return answer;
}