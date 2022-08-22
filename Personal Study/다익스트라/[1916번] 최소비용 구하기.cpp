#include <bits/stdc++.h>
using namespace std;
#define INF 1e9
int N; // 도시의 개수
int M; // 버스의 개수

vector<pair<int, int>> graph[1001]; // 도착지, 비용
vector<int> cost; // 최소 비용 저장
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
// 비용, 도시 번호로 저장 최소 힙

void dijkstra(int cur) {
    pq.push({0, cur}); // 비용, 도시 번호
    cost[cur] = 0;
    while(!pq.empty()) {
        int cur_city = pq.top().second;
        int cur_cost = pq.top().first;
        pq.pop();
        for(pair<int, int> element : graph[cur_city]) {
            int next_city = element.first;
            int next_cost = element.second + cur_cost;
            if(next_cost < cost[next_city]) {
                cost[next_city] = next_cost;
                pq.push({next_cost, next_city});
            }
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N; // 도시의 개수
    cin >> M; // 버스의 개수
    cost.resize(N + 1);
    for(int i = 1; i <= M; ++i) {
        // 버스의 정보
        int start, end, cost;
        cin >> start >> end >> cost;
        graph[start].emplace_back(make_pair(end, cost));
    }

    int startcity, endcity;
    cin >> startcity >> endcity;
    for(int i = 1; i <= N; ++i) {
        // initialize
        /* 
            https://www.acmicpc.net/board/view/97033
        */
        sort(graph[i].begin(), graph[i].end());
        cost[i] = INF;
    }

    dijkstra(startcity);
    cout << cost[endcity];
    return 0;
}
