#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int N;
    cin >> N;
    string s;
    cin >> s; // 공백없이 입력됨
    int sum = 0;
    for(int i = 0; i < N; ++i) {
        sum += s[i] - '0';
    }

    cout << sum;
    return 0;
}
