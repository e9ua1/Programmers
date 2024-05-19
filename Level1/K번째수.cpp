#include<bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for(int i=0;i<commands.size();i++){
        vector<int> VV;
        for(int j=commands[i][0]-1;j<commands[i][1];j++) VV.push_back(array[j]);
        sort(VV.begin(),VV.end());
        answer.push_back(VV[commands[i][2]-1]);
    }
    return answer;
}