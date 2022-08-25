#include <bits/stdc++.h>
using namespace std;
#define INF 1e9

vector<pair<int, int>> city[1001]; // 도착지, 비용
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
vector<int> city_cost;
vector<int> backtracking;

void dijkstra(int start_city) {
    pq.push({0, start_city});
    city_cost[start_city] = 0;
    while(!pq.empty()) {
        int cur_city =  pq.top().second;
        int cur_cost = pq.top().first;
        pq.pop();
        for(pair<int, int> element : city[cur_city]) {
            int next_city = element.first;
            int next_cost = cur_cost + element.second;
            if(next_cost < city_cost[next_city]) {
                city_cost[next_city] = next_cost;
                backtracking[next_city] = cur_city;
                pq.push({next_cost, next_city});
            }
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m; // 도시의 개수, 버스의 개수
    cin >> n >> m;
    city_cost.resize(n + 1);
    backtracking.resize(n + 1, 0);
    fill(city_cost.begin(), city_cost.end(), INF); // 최소 비용 테이블 초기화

    for(int i = 0; i < m; ++i) {
        int start, end, cost;
        cin >> start >> end >> cost;
        city[start].emplace_back(make_pair(end, cost)); // 도착지, 비용
    }

    for(int i = 1; i <= n; ++i) {
        sort(city[i].begin(), city[i].end());
    }

    int startcity, endcity;
    cin >> startcity >> endcity; // 출발 도시, 도착 도시

    dijkstra(startcity);
    
    cout << city_cost[endcity] << '\n'; // 출발 도시에서 도착 도시까지 가는 최소 비용

    /* 경로 역추적 */
    vector<int> path; // 경로 넣어 줄 공간, 뒤에서 부터 넣을 꺼
    int location = backtracking[endcity];
    path.emplace_back(endcity); // 도착지를 먼저 넣어준다.
    path.emplace_back(location); // 도착지가 어디서 왔는지 넣어준다.
    int citycnt = 2; // 최소 비용 경로에 포함된 도시 개수
    while(true) {
        location = backtracking[location];
        if(location == 0) break;
        path.emplace_back(location);
        citycnt += 1;
    }
    reverse(path.begin(), path.end());
    cout << citycnt << '\n';
    for(int element : path) {
        cout << element << ' ';
    }
    return 0;
}
