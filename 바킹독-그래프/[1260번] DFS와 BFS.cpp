#include <bits/stdc++.h>
using namespace std;

bool dfsvisited[1001];
bool bfsvisited[1001];
vector<int> adj_matrix[1001];

void dfs(int cur) {
    if(dfsvisited[cur]) return;
    dfsvisited[cur] = true;
    cout << cur << ' ';
    for(auto element : adj_matrix[cur]) {
        if(dfsvisited[element]) continue;
        dfs(element);
    }
}

void bfs(int cur) {
    queue<int> q;
    q.push(cur);
    bfsvisited[cur] = true;
    while(!q.empty()) {
        int curlocation = q.front();
        q.pop();
        cout << curlocation << ' ';
        for(auto element : adj_matrix[curlocation]) {
            if(bfsvisited[element]) continue;
            q.push(element);
            bfsvisited[element] = true;
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M, V; // 정점의 개수, 간선의 개수, 탐색을 시작할 정점의 번호
    cin >> N >> M >> V;
    fill(dfsvisited, dfsvisited + 1001, false);
    fill(bfsvisited, bfsvisited + 1001, false);
    for(int i = 0; i < M; ++i) {
        // 양방향 인접 리스트 생성
        int u, v;
        cin >> u >> v;
        adj_matrix[u].emplace_back(v);
        adj_matrix[v].emplace_back(u);
    }

    for(int i = 1; i <= N; ++i) {
        sort(adj_matrix[i].begin(), adj_matrix[i].end());
    }

    // DFS 수행한 결과 출력
    dfs(V);
    cout << '\n';

    // BFS 수행한 결과 출력
    bfs(V);
}
