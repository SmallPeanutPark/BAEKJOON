#include <bits/stdc++.h>

using namespace std;

vector<bool> ischecked;

int main(void) {
    unsigned long long n;
    unsigned long long num = 123456 * 2;
    ischecked.resize(num + 1);
    fill(ischecked.begin(), ischecked.end(), true);

    for(unsigned long long i = 2; i <= num; ++i) {
        if(!ischecked[i]) continue;
            for(unsigned long long j = i * i; j <= num; j += i) {
                ischecked[j] = false; // 소수가 아님
        }
    }

    while(cin >> n) {
        if(n == 0) break;
        unsigned long long n2 = 2 * n;
        unsigned long long ans = 0;

        for(unsigned long long i = n + 1; i <= n2; ++i) {
            if(ischecked[i]) {
                ans += 1;
            }
        }
        cout << ans << '\n';
    }
}
