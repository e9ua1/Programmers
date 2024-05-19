#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> nums){
    int ans = 0,cnt=nums.size()/2;
    sort(nums.begin(),nums.end());
    nums.erase(unique(nums.begin(),nums.end()),nums.end());
    return nums.size()<=cnt ? nums.size():cnt;
}