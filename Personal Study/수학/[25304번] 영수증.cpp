#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int X; cin >> X; // 영수증에 적힌 총 금액
    int N; cin >> N; // 영수증에 적힌 구매한 물건의 종류의 수
    int sum = 0;
    for(int i = 0; i < N; ++i) {
        int a, b;
        cin >> a >> b;
        sum += (a * b);
    }

    if(sum == X) cout << "Yes";
    else cout << "No";
    return 0;
}
