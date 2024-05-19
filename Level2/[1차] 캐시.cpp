#include <bits/stdc++.h>
using namespace std;

int solution(int limit, vector<string> cit) {
    int time = 0;
    if(limit==0) return cit.size()*5;
    unordered_set<string> cache; deque<string> dQ;
    for(auto& e:cit){
        transform(e.begin(), e.end(), e.begin(), ::tolower);
        if(cache.find(e)!=cache.end())
            time++,dQ.erase(find(dQ.begin(),dQ.end(),e));
        else {
            time+=5,cache.insert(e);
            if(dQ.size()==limit) cache.erase(dQ.front()),dQ.pop_front();
        }
        dQ.push_back(e);
    }
    return time;
}