#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int K, N, M; // 과자 한개의 가격, 과자의 개수, 현재 가진 돈의 액수
    cin >> K >> N >> M;

    int target = N * K;
    if(target <= M) {
        cout << 0;
    } else {
        cout << target - M;
    }
    return 0;
}
