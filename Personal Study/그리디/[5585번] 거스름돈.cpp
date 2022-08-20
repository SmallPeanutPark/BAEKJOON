#include <bits/stdc++.h>
using namespace std;

int coin[6] = {500, 100, 50, 10, 5, 1};

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int money; cin >> money; // 타로가 지불할 돈
    int needmoney = 1000 - money; // 거스름돈 받을 금액
    int result = 0;
    for(int i = 0; i < 6; ++i) {
        result += needmoney / coin[i];
        needmoney %= coin[i];
    }
    cout << result;
}
