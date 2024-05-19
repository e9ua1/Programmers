#include <bits/stdc++.h>
using namespace std;

bool cmp(const string& a, const string& b) {
    string head1, head2, num1, num2, tail1, tail2;
    int i = 0;
    while (!isdigit(a[i])) head1 += tolower(a[i++]);
    while (isdigit(a[i])) num1 += a[i++];
    while (i < a.size()) tail1 += a[i++];
    i = 0;
    while (!isdigit(b[i])) head2 += tolower(b[i++]);
    while (isdigit(b[i])) num2 += b[i++];
    while (i < b.size()) tail2 += b[i++];
    if (head1 != head2) return head1 < head2;
    if (num1 != num2) return stoi(num1) < stoi(num2);
    return false;
}
vector<string> solution(vector<string> files) {
    stable_sort(files.begin(), files.end(), cmp);
    return files;
}
