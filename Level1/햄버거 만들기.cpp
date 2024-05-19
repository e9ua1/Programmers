#include <bits/stdc++.h>
#define PB push_back
#define POB pop_back
using namespace std;

int solution(vector<int> ing) {
    int ans = 0;
    vector<int> v = { -1 };
    for(int& x : ing){
        if(v.back() == 1 && x == 2) v.back() = 12;
        else if(v.back() == 12 && x == 3) v.back() = 123;
        else if(v.back() == 123 && x == 1) ans++, v.POB();
        else v.PB(x);
    }
    return ans;
}