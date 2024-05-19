#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<string>> time) {
    vector<pair<short, bool>> book;
    for(auto& e:time){
        short x=600*(e[0][0]-'0')+60*(e[0][1]-'0')+10*(e[0][3]-'0')+(e[0][4]-'0');
        short y=600*(e[1][0]-'0')+60*(e[1][1]-'0')+10*(e[1][3]-'0')+(e[1][4]-'0')+10;
        book.push_back({x,1}),book.push_back({y,0});
    }
    sort(book.begin(), book.end());
    short cur_room = 0,max_room = 0;
    for (auto& b : book) {
        b.second ? cur_room++:cur_room--;
        if(max_room<cur_room) max_room=cur_room;
    }
    return max_room;
}