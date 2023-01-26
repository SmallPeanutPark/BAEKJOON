#include <bits/stdc++.h>
using namespace std;
vector<long long> tree;

void input(long long N) {
    for(long long i = 0; i < N; ++i) {
        long long n; cin >> n;
        tree.emplace_back(n);
    }
}

long long getdivideTree(long long height) {
    long long gTree = 0;
    for(long long element : tree) {
        if(element < height) continue;
        gTree += (element - height);
    }
    return gTree;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long N, M; cin >> N >> M;
    input(N);
    sort(tree.begin(), tree.end());

    long long start = 1;
    long long end = tree[tree.size() - 1];
    long long maxLen = 0;
    while(start <= end) {
        long long mid = (start + end) / 2;
        long long result = getdivideTree(mid);
        if(result >= M) {
            maxLen = max(maxLen, mid);
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    cout << maxLen;
    return 0;
}
