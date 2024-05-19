#include <bits/stdc++.h>
using namespace std;

int solution(string dart) {
    vector<int> v;
    int cnt=dart.size();
    for(int i = 0, s = 0; i < cnt; ++i) {
        if(dart[i] >= '0' && dart[i] <= '9')
            s = s * 10 + dart[i] - '0';
        else if(dart[i] == 'S') v.push_back(s), s = 0;
        else if(dart[i] == 'D') v.push_back(s * s), s = 0;
        else if(dart[i] == 'T') v.push_back(s * s * s), s = 0;
        else if(dart[i] == '*') {
            if(v.size() > 1) v.back() *= 2, *prev(v.end()-1)*= 2;
            else v.back() *= 2;
        } else v.back() *= -1;
    }
    return v[0]+v[1]+v[2];
}
