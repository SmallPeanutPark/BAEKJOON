#include <bits/stdc++.h>
using namespace std;
int arr[9];

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 0; i < 9; ++i) {
        cin >> arr[i];
    }

    int maxvalue = *max_element(arr, arr + 9); // 최댓값
    cout << maxvalue << '\n';

    
    for (int i = 0; i < 9; i++) {
        int idx = 0;
        if (arr[i] == maxvalue) {
            idx = i + 1; // 배열 위치 + 1
            cout << idx;
        }
    }
    return 0;
}
