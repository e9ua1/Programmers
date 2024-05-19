#include <bits/stdc++.h>
using namespace std;

bool solution(string s) {
    bool answer = true;
    for(auto i:s) if(!isdigit(i)) answer=false;
    return s.size()==4 || s.size()==6 ? answer:false;
}