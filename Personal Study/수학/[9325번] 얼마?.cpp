#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC; // 테스트 케이스 개수
    cin >> TC;
    for(int i = 0; i < TC; ++i) {
        int s;
        cin >> s;
        int option;
        cin >> option;
        long long sum  = 0;
        sum += s;
        for(int j = 0; j <option; ++j) {
            int q; // 특정 옵션 개수
            int p; // 해당 옵션의 가격
            cin >> q >> p;
            sum += (q * p);
        }
        cout << sum << '\n';
    }
}
