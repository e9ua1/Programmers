#include <bits/stdc++.h>
#define MAX 9999999999
using namespace std;

bool isPrime(int number){
    if (number == 1) return false;
    if (number == 2) return true;
    if (number % 2 == 0) return false;
    bool isPrime = true;
    for (int i = 2; i <= sqrt(number); i++) if (number% i == 0) return false;
    return isPrime;
}
bool compare(char a, char b){return a > b;}
int solution(string numbers) {
    string temp; temp = numbers;
    sort(temp.begin(), temp.end(),compare);
    vector<bool> prime(std::stoi(temp)+1); prime[0] = false;
    for (long long i = 1; i < prime.size(); i++) prime[i] = isPrime(i);
    string s, sub; s = numbers;
    sort(s.begin(), s.end());
    set<int> primes;
    int l = s.size();
    do {
        for (int i = 1; i <= l; i++){
            sub = s.substr(0, i);
            if (prime[stoi(sub)]) primes.insert(stoi(sub));
        }
    } while (next_permutation(s.begin(), s.end()));
    return primes.size();
}