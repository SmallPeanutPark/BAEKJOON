#include <vector>
#include <algorithm>
#include <iostream>
#include <map>

using namespace std;

vector<int> v;
map<int, int> m;

int binarysearch(int target) {
    int start = 0;
    int end = v.size() - 1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (v[mid] > target) {
            end = mid - 1;
        }
        else if (v[mid] < target) {
            start = mid + 1;
        }
        else {
            // 찾음
            return m[v[mid]];
        }
    }
    // 못 찾음
    return 0;
}




int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N; cin >> N;
    for (int i = 0; i < N; ++i) {
        int n; cin >> n;
        v.emplace_back(n);
        if (m.find(n) != m.end()) {
            m[n] += 1;
        }
        else {
            m.insert({ n, 1 });
        }
    }
    sort(v.begin(), v.end());
    int M; cin >> M;
    for (int i = 0; i < M; ++i) {
        int n; cin >> n;
        cout << binarysearch(n) << ' ';
    }
    return 0;
}
