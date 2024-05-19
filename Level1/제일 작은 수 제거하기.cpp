#include<bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> arr) {
    arr.erase(min_element(arr.begin(), arr.end()));
    return arr.empty() ? vector<int>(1, -1) : arr;
}