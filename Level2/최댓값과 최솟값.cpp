#include <bits/stdc++.h>
using namespace std;

string solution(string s) {
    set<int> PQ;
    for (int i = 0; i < s.size(); i++) {
        string tmp = "";
        while (i < s.size() && s[i] != ' ') {
            tmp += s[i]; i++;
        }
        int num = stoi(tmp);
        PQ.insert(num);
    }
    string a=to_string(*PQ.begin());
    a+=" "; a+=to_string(*PQ.rbegin());
    return a;
}