#include <bits/stdc++.h>
using namespace std;

struct comp {
    int x;
    comp(int value) {
        x = value;
    }
};

struct compareX {
    bool operator() (const comp a1, const comp a2) {
        if (abs(a1.x) == abs(a2.x)) return a1.x > a2.x;
        return abs(a1.x) > abs(a2.x);
    }
};

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    priority_queue<comp, vector<comp>, compareX> pq;
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        int x;
        cin >> x;
        if (x == 0) {
            if (pq.empty())  cout << "0" << '\n';
            else {
                comp p = pq.top();
                cout << p.x << '\n';
                pq.pop();
            }
        }
        else {
            pq.push(comp(x));
        }
    }

    return 0;
}
