#include <bits/stdc++.h>
using namespace std;

vector<int> solution(string tdy, vector<string> term, vector<string> prv) {
    vector<int> ans,T(26);
    for(auto& e:term){
        stringstream in(e);
        string a,b; in>>a>>b;
        T[e[0]-'A']=stoi(b);
    }
    int idx=1,TD=stoi(tdy.substr(8,2))+(stoi(tdy.substr(5,2))*28)+(stoi(tdy.substr(2,2))*28*12);
    for(auto& e:prv){
        int sum=0;
        sum+=stoi(e.substr(8,2)); sum+=(stoi(e.substr(5,2))*28);
        sum+=(stoi(e.substr(2,2))*28*12); sum+=(T[e[11]-'A']*28);
        if(sum<=TD) ans.push_back(idx);
        idx++;
    }
    return ans;
}