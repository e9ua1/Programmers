#include<bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> W) {
    int L=W[0][0],R=W[0][1];
    if(L<R) swap(L,R);
    for(int i=1;i<W.size();i++){
        if(W[i][0]<W[i][1]){
            if(L<W[i][1]) L=W[i][1];
            if(R<W[i][0]) R=W[i][0];
        }
        else{
            if(R<W[i][1]) R=W[i][1];
            if(L<W[i][0]) L=W[i][0];
        }
    }
    return L*R;
}