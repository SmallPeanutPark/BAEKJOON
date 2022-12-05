#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, X; cin >> N >> X;
    for(int i = 0; i < N; ++i) {
        int n; cin >> n;
        v.emplace_back(n);
    }
    int sum = 0;
    for(int i = 0; i < X; ++i) {
        sum += v[i];
    }

    int result = sum;
    vector<int> day;
    day.emplace_back(sum);
    int count = 0;
    for(int i = X; i < N; ++i) {
        sum += (v[i] - v[i - X]);
        day.emplace_back(sum);
        result = max(result, sum);
    }

    for(int element : day) {
        if(result == element) count += 1;
    }

    if(result == 0) {
        cout << "SAD";
    } else {
        cout << result << '\n';
        cout << count << '\n';
    }
    return 0;
}
