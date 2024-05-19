#include <bits/stdc++.h>
using namespace std;
string Yo[7]={"THU","FRI","SAT","SUN","MON","TUE","WED"};
int DP[12]={0,31,60,91,121,152,182,213,244,274,305,335};

string solution(int a, int b) {
    return Yo[(DP[a-1]+b)%7];
}