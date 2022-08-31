#include <bits/stdc++.h>
using namespace std;

vector<int> arr;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    for(int i = 0; i < N; ++i) {
        int n; cin >> n;
        arr.emplace_back(n);
    }
    sort(arr.begin(), arr.end());
    int M; cin >> M;
    for(int i = 0; i < M; ++i) {
        int n; cin >> n;
        cout << binary_search(arr.begin(), arr.end(), n) << ' ';
    }
    return 0;
}
