#include <bits/stdc++.h>
using namespace std;

vector<int> solution(string s) {
    int st = 0,en=0;
    while (s != "1") {
        int cnt =0;
        for(int i=0;i<s.size();i++) if(s[i]=='1') cnt++;
        st++;
        en += s.size() - cnt;
        s="";
        while (cnt > 0) {
            s += to_string(cnt % 2);
            cnt /= 2;
        }
    }
    vector<int> as = {st, en};
    return as;
}