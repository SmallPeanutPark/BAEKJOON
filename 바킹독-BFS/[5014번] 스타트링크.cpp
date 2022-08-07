#include <bits/stdc++.h>
using namespace std;

int startlink[1000001];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int F, S, G, U, D;// F : 총 F층으로 이루어짐, G : 스타트링크 있는 위치, S : 강호 위치
    // U : 위로 갈 수 있는 층수 D: 아래로 갈 수 있는 층 수
    // 건물은 1층 부터 시작
    cin >> F >> S >> G >> U >> D;
    vector<int> updown;
    updown.push_back(U);
    updown.push_back(D);
    fill(startlink, startlink + 1000001, -1);
    queue<int> q;
    q.push(S);
    startlink[S] = 0;
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        for (int i = 0; i < 2; ++i) {
            int n = 0;
            if (i == 0)
                n = cur + updown[i];
            else
                n = cur - updown[i];
            if (n <= 0 || n > F) continue;
            if (startlink[n] >= 0) continue;
            q.push(n);
            startlink[n] = startlink[cur] + 1;
        }
    }
    if (startlink[G] >= 0) {
        cout << startlink[G];
    } else cout << "use the stairs";

    return 0;
}
