#include <bits/stdc++.h>
using namespace std;
bool prim[3001];

void pi(){
    for(int i=2;i<3001;++i){
        bool valid=true;
        for(int j=2;j*j<=i;++j) if(!(i%j)){valid=false; break;}
        if(valid)prim[i]=1;
    }
}
int solution(vector<int> nums) {
    int ans = 0,cnt=nums.size();
    pi();
    for(int i=0;i<cnt;++i)
        for(int j=i+1;j<cnt;++j)
            for(int k=j+1;k<cnt;++k)
                if(prim[nums[i]+nums[j]+nums[k]]) ans++;
    return ans;
}