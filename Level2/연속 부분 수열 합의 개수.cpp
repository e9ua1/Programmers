#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> ele) {
    int n=ele.size();
    unordered_set<int> s;
    for (int i = 0 ; i < n ; ++i) {
        int sum = 0;
        for (int j = i ; j < i + n ; ++j)
            sum += ele[j % n],s.insert(sum);
    }
    return s.size();
}
