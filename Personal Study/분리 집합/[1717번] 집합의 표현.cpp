#include <bits/stdc++.h>
using namespace std;
vector<int> parent;

int getParent(int a) {
    if(parent[a] == a) return a;
    else return parent[a] = getParent(parent[a]);
}


void unionParent(int a, int b) {
    a = getParent(a);
    b = getParent(b);
    if(a == b) return;

    if(a < b) parent[b] = a;
    else parent[a] = b;
}

bool isSameParent(int a, int b) {
    a = getParent(a);
    b = getParent(b);
    if(a == b) return true;
    else return false;
}


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    for(int i = 0; i <= n; ++i) {
        parent.emplace_back(i);
    }

    for(int i = 0; i < m; ++i) {
        int z, a, b; // z : 0 이면 합집합 연산, 1이면 같은 집합인지 확인
        cin >> z >> a >> b;
        if(z == 0) {
            // 합집합 Union
            unionParent(a, b);
        } else {
            // 같은 그래프 확인 Find
            if(isSameParent(a, b)) {
                cout << "YES" << '\n';
            } else {
                cout << "NO" << '\n';
            }
        }
    }
    return 0;
}
