#include <bits/stdc++.h>

using namespace std;
vector<long long> saveValue;
priority_queue<long long, vector<long long>, greater<long long>> pq;

void getCharacteristicValue(int N) {
    long long minValue = LLONG_MAX;
    for(int i = 0; i < N; ++i) {
        long long findValue = saveValue[i] * -1;
        int l = lower_bound(saveValue.begin(), saveValue.end(), findValue) - saveValue.begin();
        for(int j = l - 1; j <= l; ++j) {
            if((j == i) || (j < 0) || (j >= N)) continue;
            long long result = abs(saveValue[i] + saveValue[j]);
            if(minValue >= result) {
                minValue = min(minValue, result);
                if(pq.size() == 2) {
                    priority_queue<long long, vector<long long>, greater<long long>> tmppq;
                    pq.swap(tmppq);
                }
                pq.push(saveValue[i]);
                pq.push(saveValue[j]);
            }
        }
    }
    cout << pq.top() << ' ';
    pq.pop();
    cout << pq.top() << ' ';
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    for(int i = 0; i < N; ++i) {
        long long num; cin >> num;
        saveValue.emplace_back(num);
    }

    sort(saveValue.begin(), saveValue.end());
    getCharacteristicValue(N);
    return 0;
}
