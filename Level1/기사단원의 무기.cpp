#include <bits/stdc++.h>
using namespace std;

int solution(int num, int lmt, int pwr) {
    int ans = 1;
    for(int i=2;i<=num;++i){
        int plus=0,add=0;
        for(int j=1;j*j<=i;++j){
            if(!(i%j)) plus++;
            if((j+1)*(j+1)==i) add++,plus--;
        }
        if(2*plus+add>lmt) ans+=pwr;
        else ans+=(2*plus+add);
    }
    return ans;
}