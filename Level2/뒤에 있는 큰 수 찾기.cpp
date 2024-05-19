#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> num) {
    vector<int> ans(num.size(), -1);
    stack<int> st; st.push(num.back());
    for (int i = (int)num.size() - 2; i >= 0; --i) {
        while (!st.empty() && st.top() <= num[i]) st.pop();
        if (!st.empty()) ans[i] = st.top();
        st.push(num[i]); // 자명한 사실: st.pop 햇던 원소는 num[i]보다 작거나 같아서 뒷큰수 찾을 시 미리 막힘
    }
    return ans;
}
