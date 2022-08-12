#include <bits/stdc++.h>
using namespace std;

vector<int> graph[100005];
bool visited[100005];
int N, M, R; // 정점의 수, 간선의 수, 시작 정점
vector<int> save;
void bfs(int cur) {
    save.resize(N + 1);
    queue<int> q;
    q.push(cur);
    visited[cur] = true;
    save[cur] = 1;
    int cnt = 1;
    while (!q.empty()) {
        int cur_vertex = q.front();
        q.pop();
        for (int element : graph[cur_vertex]) {
            if (visited[element]) continue;
            q.push(element);
            visited[element] = true;
            cnt += 1;
            save[element] = cnt;
        }
    }

    for (int i = 1; i <= N; ++i) {
        cout << save[i] << '\n';
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N >> M >> R;
    for (int i = 1; i <= M; ++i) {
        // 양방향 간선
        int u, v;
        cin >> u >> v;
        graph[u].emplace_back(v);
        graph[v].emplace_back(u);
    }

    for (int i = 1; i <= N; ++i) {
        sort(graph[i].begin(), graph[i].end()); // 오름차순으로 방문하기 위해 정렬
    }
    // 정점 탐색 bfs
    bfs(R);
}
