#include <bits/stdc++.h>
using namespace std;

bool visited[1001];
vector<int> adj_matrix[1001];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M; // 정점의 개수 간선의 개수 M
    cin >> N >> M;
    fill(visited, visited + 1001, false);
    
    for (int i = 1; i <= M; ++i) {
        int u, v;
        cin >> u >> v;
        // 무방향 그래프
        adj_matrix[u].emplace_back(v);
        adj_matrix[v].emplace_back(u);
    }

    // 비재귀 dfs
    stack<int> st;
    int num = 0;
    for (int i = 1; i <= N; ++i) {
        if (visited[i]) continue;
        num += 1;
        st.push(i);
        visited[i] = true;
        while (!st.empty()) {
            int cur = st.top();
            st.pop();
            for (auto element : adj_matrix[cur]) {
                if (visited[element]) continue;
                st.push(element);
                visited[element] = true;
            }
        }
    }
    cout << num;
}
