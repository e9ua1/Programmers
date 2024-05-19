#include <bits/stdc++.h>
#define PB push_back
using namespace std;

vector<vector<int>> solution(vector<vector<int>> a1, vector<vector<int>> a2) {
    vector<vector<int>> ans;
    int mul=0,L=a1.size(),M=a1[0].size(),R=a2[0].size();
    for(int k=0;k<L;k++){
        vector<int> tmp;
        for(int i=0;i<R;i++){
            mul=0;
            for(int j=0;j<M;j++) mul+=(a1[k][j]*a2[j][i]);
            tmp.PB(mul);
        }
        ans.PB(tmp);
    }
    return ans;
}