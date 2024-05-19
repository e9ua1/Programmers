#include <bits/stdc++.h>
#define F first
#define S second
using namespace std;

vector<int> solution(vector<string> park, vector<string> rut) {
    int cnt1 = park.size(), cnt2 = park[0].size(),escape=0;
    pair<int, int> pos;
    for (int i = 0; i < cnt1; ++i) {
        for (int j = 0; j < cnt2; ++j)
            if (park[i][j] == 'S') {pos = {i, j},escape=1;break;}
        if(escape) break;
    }
    for (auto &e : rut) {
        int step = e[2] - '0'; bool VS = false;
        if (e[0] == 'E') {
            for (int i = 1; i <= step; ++i)
                if (pos.S + i >= cnt2 || park[pos.F][pos.S + i] == 'X') {VS = true; break;}
            if (VS) continue;
            pos.S += step;
        }
        else if (e[0] == 'W') {
            for (int i = 1; i <= step; ++i)
                if (pos.S - i < 0 || park[pos.F][pos.S - i] == 'X') {VS = true;break;}
            if (VS) continue;
            pos.S -= step;
        }
        else if (e[0] == 'S') {
            for (int i = 1; i <= step; ++i)
                if (pos.F + i >= cnt1 || park[pos.F + i][pos.S] == 'X') {VS = true;break;}
            if (VS) continue;
            pos.F += step;
        }
        else if (e[0] == 'N') {
            for (int i = 1; i <= step; ++i)
                if (pos.F - i < 0 || park[pos.F - i][pos.S] == 'X') {VS = true;break;}
            if (VS) continue;
            pos.F -= step;
        }
    }
    return {pos.F, pos.S};
}
