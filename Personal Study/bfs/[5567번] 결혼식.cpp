#include <bits/stdc++.h>
using namespace std;

vector<int> adj_matrix[501];
bool visited[501];
int dist[501];

void bfs(int cur) {
    queue<int> q;
    q.push(cur);
    visited[cur] = true;
    while(!q.empty()) {
        int curlocation = q.front();
        q.pop();
        for(auto element : adj_matrix[curlocation]) {
            if(visited[element] || dist[element] != 0) continue;
            q.push(element);
            dist[element] = dist[curlocation] + 1;
            visited[element] = true;
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; // 상근이의 동기수
    cin >> n;
    int m; // 리스트의 길이
    cin >> m;
    for(int i = 0; i < m; ++i) {
        // 양방향 그래프
        int a, b;
        cin >> a >> b;
        adj_matrix[a].emplace_back(b);
        adj_matrix[b].emplace_back(a);
    }
    fill(dist, dist + 501, 0);
    fill(visited, visited + 501, false);
    // 자신의 친구와 친구의 친구
    
    bfs(1); // 상근이는 1
    int ans = 0;
    for(int i = 1; i <= n; ++i) {
        if(dist[i] > 0 && dist[i] <= 2) {
            ans += 1;
        }
    }
    cout << ans;
    return 0;
}
