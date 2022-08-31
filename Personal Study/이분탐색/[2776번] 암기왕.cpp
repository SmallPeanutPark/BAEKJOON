#include <bits/stdc++.h>
using namespace std;

vector<int> arr;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int TC; cin >> TC;
    for(int i = 0; i < TC; ++i) {
        int N; cin >> N;
        for(int j = 0; j < N; ++j) {
            int n; cin >> n;
            arr.emplace_back(n);
        }
        sort(arr.begin(), arr.end());
        int M; cin >> M;
        for(int k = 0; k < M; ++k) {
            int n; cin >> n;
            cout << binary_search(arr.begin(), arr.end(), n) << '\n';
        }
        arr.clear();
    }
    return 0;
}
