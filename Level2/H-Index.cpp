#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> cit) {
    int ans = 0,cnt=cit.size();
    sort(cit.begin(),cit.end());
    for(int i=cnt;i>0;--i){
        int it=cit.end()-lower_bound(cit.begin(),cit.end(),i);
        if(it>=i) return i;
    }
    return ans;
}