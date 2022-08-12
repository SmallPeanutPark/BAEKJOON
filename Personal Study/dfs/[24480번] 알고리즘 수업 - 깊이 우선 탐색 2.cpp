#include <bits/stdc++.h>
using namespace std;

int N, M, R; // 정점 개수, 간선의 개수, 시작 정점
vector<int> graph[100001];
bool visited[100001];
vector<int> memoization;
int visited_cnt = 0;

void dfs(int cur) {
    visited[cur] = true;
    memoization[cur] = visited_cnt;
    for (int element : graph[cur]) {
        if (visited[element]) continue;
        visited_cnt += 1;
        dfs(element);
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N >> M >> R;
    for (int i = 1; i <= M; ++i) {
        // 무방향 그래프
        int u, v; cin >> u >> v;
        graph[u].emplace_back(v);
        graph[v].emplace_back(u);
    }

    for (int i = 1; i <= N; ++i) {
        sort(graph[i].begin(), graph[i].end(), greater<int>()); // 내림 차순 정렬
    }
    memoization.resize(N + 1);
    visited_cnt = 1;
    dfs(R);

    for (int i = 1; i <= N; ++i) {
        cout << memoization[i] << '\n';
    }
    return 0;
}
