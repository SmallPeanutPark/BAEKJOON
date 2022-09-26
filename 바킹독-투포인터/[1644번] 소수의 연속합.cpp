#include <bits/stdc++.h>
using namespace std;
vector<int> prime;
vector<bool> isprime;

void savePrimeNumber(int N) {
    isprime[1] = false;
    for(unsigned long long i = 2; i <= N; ++i) {
        if(isprime[i] == false) continue;
        prime.emplace_back(i);
        for(unsigned long long j = i * i; j <= N; j += i) {
            isprime[j] = false;
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    if(N == 1) {
        cout << 0;
        return 0;
    }
    isprime.resize(N+1, true);
    savePrimeNumber(N);
    int len = prime.size();
    int ans = 0;
    int end = 0;
    int sum = prime[0];
    for(int start = 0; start < len; ++start) {
        while(end < len && sum < N) {
            end += 1;
            sum += prime[end];
        }
        if(end == len) break;
        if(sum == N) ans += 1;
        sum -= prime[start];
    }
    cout << ans;
    return 0;
}
