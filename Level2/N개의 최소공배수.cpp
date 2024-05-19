#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int tmp = b;
        b = a % b,a = tmp;
    }
    return a;
}
int solution(vector<int> arr) {
    int ans = arr[0],cnt=arr.size();
    for(int i=1;i<cnt;++i) ans=(ans * arr[i] / gcd(ans, arr[i]));
    return ans;
}
