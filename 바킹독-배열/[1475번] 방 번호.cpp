#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int arr[10] = { 0, };
    int num;
    cin >> num; // 방 번호 입력

    string s = to_string(num);
    int len = s.length();
    for (int i = 0; i < len; ++i) {
        arr[s[i] - '0'] += 1; // 0 ~ 9 번호별로 갯수
    }

    // 0 ~ 9까지 1세트, 6과 9는 혼용하여 쓸 수 있음
    arr[6] += arr[9];
    int save = arr[6];
    arr[6] = (save / 2);
    arr[6] += (save % 2);
    arr[9] = 0;

    int result = 0;
    for (int i = 0; i < 10; ++i) {
        while ((arr[i] != 0) && (arr[i] - result != 0) &&
            (result < arr[i])) {
            result += 1;
        }
    }
    cout << result;
}
