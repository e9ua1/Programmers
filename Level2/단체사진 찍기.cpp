#include<bits/stdc++.h>
using namespace std;

int solution(int n, vector<string> data) {
    int ans = 0;
    vector<int> num={1,2,3,4,5,6,7,8};
    unordered_map<char, int> frd_idx{{'A', 1}, {'C', 2}, {'F', 3}, {'J', 4}, {'M', 5}, {'N', 6}, {'R', 7}, {'T', 8}};
    do {
        bool valid = true;
        for (auto& cond : data) {
            char f1 = cond[0],f2 = cond[2],rlt = cond[3];
            int gap = cond[4] - '0',idx1 = frd_idx[f1],idx2 = frd_idx[f2];
            int dist = abs(num[idx1-1] - num[idx2-1]) - 1;
            if ((rlt == '=' && dist != gap) ||
                (rlt == '<' && dist >= gap) ||
                (rlt == '>' && dist <= gap)) {
                valid = false; break;
            }
        }
        if (valid) ans++;
    } while (next_permutation(num.begin(), num.end()));
    return ans;
}