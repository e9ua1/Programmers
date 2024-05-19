#include<bits/stdc++.h>
using namespace std;

string solution(vector<int> food) {
    string ST= "";
    for(int i=1;i<food.size();++i){
        int cnt=food[i]/2;
        while(cnt--) ST+=('0'+i);
    }
    string ET=ST;
    reverse(ST.begin(),ST.end());
    return ET + "0" + ST;
}