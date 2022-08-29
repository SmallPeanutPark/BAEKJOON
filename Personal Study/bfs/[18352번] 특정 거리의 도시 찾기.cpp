#include <bits/stdc++.h>
using namespace std;
vector<int> graph[3000001];
int dist[3000001];

void bfs(int cur) {
    queue<int> q;
    q.push(cur);
    dist[cur] = 0;
    while(!q.empty()) {
        int cur_node = q.front();
        q.pop();
        for(int element : graph[cur_node]) {
            if(dist[element] != -1) continue;
            q.push(element);
            dist[element] = dist[cur_node] + 1;
        }
    }
}


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M, K, X; // 도시의 개수, 도로의 개수, 거리 정보, 출발 도시의 번호
    cin >> N >> M >> K >> X;
    for(int i = 0; i < M; ++i) {
        int city1, city2;
        cin >> city1 >> city2;
        graph[city1].emplace_back(city2);
    }
    fill(dist, dist + 3000001, -1);
    bfs(X);
    vector<int> ans;
    for(int i = 1; i <= N; ++i) {
        if(dist[i] == K) {
            ans.emplace_back(i); // 최단 거리 K인 모든 도시 저장
        }
    }
    if(ans.empty()) {
        cout << -1;
    } else {
        sort(ans.begin(), ans.end()); // 오름 차순 정렬
        for(int element : ans) {
            cout << element << '\n';
        }
    }
    return 0;
}
