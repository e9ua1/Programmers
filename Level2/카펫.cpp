#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int brn, int yel) {
    vector<int> ans;
    int e1=(brn+4)/2,e2=sqrt(e1*e1-4*(brn+yel));
    ans.push_back((e1+e2)/2),ans.push_back((e1-e2)/2);
    return ans;
}