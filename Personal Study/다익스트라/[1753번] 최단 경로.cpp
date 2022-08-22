#include <bits/stdc++.h>
using namespace std;

#define INF 1e9 // 최댓값

int V; // 정점의 개수
int E; // 간선의 개수
int K; // 시작 정점
vector<int> cost; // 최소 비용 저장
vector<pair<int, int>> graph[20001]; // 연결 정점, 가중치

priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
// 최소힙,  {가중치, 정점} 적은 가중치가 맨 앞에 오도록 함

void dijkstra(int cur) {
    pq.push({0, cur});
    cost[cur] = 0;
    while(!pq.empty()) {
        int cur_node = pq.top().second; // 현재 정점
        int cur_cost = pq.top().first; // 현재 가중치
        pq.pop();
        for(pair<int, int> element : graph[cur_node]) {
            int next_node = element.first;
            int next_distance = element.second + cur_cost;
            if(next_distance < cost[next_node]) {
                cost[next_node] = next_distance;
                pq.push({next_distance, next_node});
            }
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> V >> E; // 정점의 개수, 간선의 개수
    cin >> K; // 시작 정점
    cost.resize(V + 1);
    for(int i = 0; i < E; ++i) {
        int start, end, cost;
        cin >> start >> end >> cost;
        graph[start].emplace_back(make_pair(end, cost));
    }

    for(int i = 1; i <= V; ++i) {
        cost[i] = INF;
    }

    dijkstra(K); // 시작 정점

    for(int i = 1; i <= V; ++i) {
        if(cost[i] == INF) {
            cout << "INF" << '\n';
        } else {
            cout << cost[i] << '\n';
        }
    }
    
    return 0;
}
