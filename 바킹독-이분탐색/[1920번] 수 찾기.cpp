#include <bits/stdc++.h>
using namespace std;

vector<int> A;

int binarysearch(int target) {
    int start = 0;
    int end = A.size() - 1;
    while(start <= end) {
        int mid = (start + end) / 2;
        if(A[mid] < target) {
            start = mid + 1;
        } else if(A[mid] > target) {
            end = mid - 1;
        } else {
            // 찾았을 때
            return 1;
        }
    }
    return 0; // 못찾았을 때
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    for(int i = 0; i < N; ++i) {
        int n; cin >> n;
        A.emplace_back(n);
    }
    sort(A.begin(), A.end()); // 오름 차순 정렬

    int M; cin >> M;
    for(int i = 0; i < M; ++i) {
        int n; cin >> n;
        cout << binarysearch(n) << '\n';
    }
    
    return 0;
}
