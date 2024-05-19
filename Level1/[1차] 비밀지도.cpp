#include <bits/stdc++.h>
using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> ans;
    for(int i=0;i<n;i++){
        string S="";
        int cnt=n,tmp=arr1[i] | arr2[i];
        while(cnt--){
            if(tmp%2) S="#"+S;
            else S=" "+S;
            tmp>>=1;
        }
        ans.push_back(S);
    }
    return ans;
}