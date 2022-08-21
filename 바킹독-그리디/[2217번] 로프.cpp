#include <bits/stdc++.h>
using namespace std;

vector<int> info;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    info.resize(N, 0);
    for(int i = 0; i < N; ++i) {
        int weight; cin >> weight;
        info[i] = weight;
    }
    sort(info.begin(), info.end(), greater<int>()); 
    int result = 0;

    int select = 1;
    for(int i = 0; i < N; ++i) {
        result = max(result, info[i] * select);
        select += 1;
    }
    cout << result;
}
