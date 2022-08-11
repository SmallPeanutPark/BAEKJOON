#include <bits/stdc++.h>
using namespace std;

vector<int> adj_matrix[105];
bool visited[105];
int relationship[105];

void bfs(int cur) {
    queue<int> q;
    q.push(cur);
    visited[cur] = true;
    while (!q.empty()) {
        int curlocation = q.front();
        q.pop();
        for (auto element : adj_matrix[curlocation]) {
            if (visited[element]) continue;
            q.push(element);
            visited[element] = true;
            relationship[element] = relationship[curlocation] + 1;
        }
    }
}


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n; // 전체 사람의 수
    fill(relationship, relationship+ 105, 0);
    int find1number, find2number; // 촌수를 계산해야하는 서로 다른 두 사람의 번호
    cin >> find1number >> find2number;
    int m; // 부모 자식들 간의 관계의 개수
    cin >> m;
    fill(visited, visited + 105, false);
    for (int i = 0; i < m; ++i) {
        int x, y; // 부모, 자식
        cin >> x >> y;
        adj_matrix[x].emplace_back(y);
        adj_matrix[y].emplace_back(x);
    }

    bfs(find1number);

    if (relationship[find2number] != 0) {
        cout << relationship[find2number];
    }
    else {
        cout << -1;
    }
    return 0;
}
