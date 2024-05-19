#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    unordered_map<string, int> name_to_idx;
    name_to_idx["code"] = 0;
    name_to_idx["date"] = 1;
    name_to_idx["maximum"] = 2;
    name_to_idx["remain"] = 3;
    auto it = remove_if(data.begin(), data.end(), [idx=name_to_idx[ext], val_ext](const auto& row) {
        return row[idx] >= val_ext;
    });
    data.erase(it, data.end());
    sort(data.begin(), data.end(), [idx=name_to_idx[sort_by]](const auto& row1, const auto& row2) {
        return row1[idx] < row2[idx];
    });
    return data;
}