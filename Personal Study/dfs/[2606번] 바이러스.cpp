#include <bits/stdc++.h>
using namespace std;

vector<int> adj_matrix[105];
bool visited[105];
int answer = 0;

void dfs(int cur) {
    visited[cur] = true;

    for(auto element : adj_matrix[cur]) {
        if(visited[element]) continue;
        dfs(element);
        answer += 1;
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; // 컴퓨터 수
    cin >> N;
    int M; // 컴퓨터 쌍 수
    cin >> M;
    for(int i = 0; i < M; ++i) {
        int u, v;
        cin >> u >> v;
        adj_matrix[u].emplace_back(v);
        adj_matrix[v].emplace_back(u);
    }
    fill(visited, visited + 105, false);
    dfs(1);

    cout << answer;
    return 0;
}
