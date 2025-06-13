#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false);cin.tie(nullptr)
using namespace std;
int main() {
    FAST_IO;
    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    for(auto &elem : a) cin >> elem;
    vector<vector<vector<bool>>> visited(2, vector<vector<bool>>(n, vector<bool>(m, false)));
    visited[0][0][0] = true;
    queue<tuple<short, short, short>> q;
    q.push({0, 0, 0});
    int ans = 1;
    while(!q.empty()){
        int size = (int)q.size();
        while(size--){
            auto [stat, y, x] = q.front(); q.pop();
            if(y == n-1 && x == m-1){
                cout << ans;
                return 0;
            }
            for(int i = 0; i < 4; i++){
                int dy = y, dx = x,cur_stat = stat;;
                if(i & 1) dy += 2-i;
                else dx += 1-i;
                if(dy < 0 || dx < 0 || dy >= n || dx >= m || visited[cur_stat][dy][dx]) continue;
                if(a[dy][dx] == '1'){
                    if(!cur_stat && !visited[1][dy][dx]) cur_stat++;
                    else continue;
                }
                visited[cur_stat][dy][dx] = true; q.push({cur_stat, dy, dx});
            }
        }
        ans++;
    }
    cout << -1;
}