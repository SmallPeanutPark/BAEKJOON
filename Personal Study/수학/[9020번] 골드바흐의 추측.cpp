#include <bits/stdc++.h>

using namespace std;
vector<bool> ischecked;

void checkPrime() {
    for(unsigned long long i = 2; i <= 10000; ++i) {
        if(!ischecked[i]) continue;
        for(unsigned long long j = i * i; j <= 10000; j += i) {
            ischecked[j] = false; // 소수 아님
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ischecked.resize(10001);
    fill(ischecked.begin(),ischecked.end(), true);

    checkPrime();

    int TC; cin >> TC;
    for(int i = 0; i < TC; ++i) {
        vector<int> v;
        unsigned long long n; cin >> n;
        for(unsigned long long j = 2; j <= n; ++j) {
            if(ischecked[j]) {
                v.emplace_back(j);
            }
        }

        int gSize = v.size();
        int minValue = 0x7fffffff;
        int num1, num2 = 0;
        for(int j = 0; j < gSize; ++j) {
            for(int k = j; k < gSize; ++k) {
                if(v[j] + v[k] == n) {
                    if(v[k] > v[j]) {
                        if(minValue > (v[k] - v[j])) {
                            minValue = min(minValue, v[k] - v[j]);
                            num2 = v[k];
                            num1 = v[j];
                        }
                    } else {
                        if(minValue > (v[j] - v[k])) {
                            minValue = min(minValue, v[j] - v[k]);
                            num2 = v[j];
                            num1 = v[k];
                        }
                    }
                   
                }
            }
        }
        cout << num1 << ' ' << num2 << '\n';    
    }
    return 0;
}
