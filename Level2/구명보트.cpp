#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> p, int lmt) {
    sort(p.rbegin(), p.rend());
    int maxP = (int)p.size() - 1,minP = 0;
    while(maxP > minP){
        if(p[maxP--] + p[minP] <= lmt) ++minP;
    }
    return p.size() - minP;
}
