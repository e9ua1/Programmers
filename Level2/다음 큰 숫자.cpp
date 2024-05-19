#include<bits/stdc++.h>
using namespace std;

int solution(int n) {
    bitset<32> bs(n);
    int cnt=bs.count();
    while(1){
        n++;
        bitset<32> tmp(n);
        if(tmp.count()==cnt) return n;
    }
}