#include<bits/stdc++.h>
using namespace std;

int solution(int left, int right) {
    int answer = 0;
    for(int i=left;i<=right;i++) {
        int K=1;
        while(i!=K*K) {
            if(K==i) break;
            K++;
        }
        if(i!=1 && K==i) answer+=i;
        else answer-=i;
    }
    return answer;
}