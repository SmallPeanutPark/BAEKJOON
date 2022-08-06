#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int TC; // 테스트 케이스 수
    cin >> TC;
    for(int i = 0; i < TC; ++i) {
        int c, v; // 사탕 개수, 형제의 수
        cin >> c >> v;
        int firststr = c / v;
        int secondstr = c - (firststr * v);
        cout << "You get " << firststr << " piece(s) and your dad gets " << secondstr << " piece(s)." << '\n';
    }
    return 0;
}
