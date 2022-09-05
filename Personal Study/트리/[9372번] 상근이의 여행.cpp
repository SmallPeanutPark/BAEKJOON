#include <bits/stdc++.h>
using namespace std;


class Edge {
    public :
        int area[2];
        Edge(int area1, int area2) {
            this->area[0] = area1;
            this->area[1] = area2;
        }
};

int getParent(vector<int>& parent, int area) {
    if(parent[area] == area) return area;
    else return parent[area] = getParent(parent, parent[area]);
}

void unionParent(vector<int>& parent, int area1, int area2) {
    area1 = getParent(parent, area1);
    area2 = getParent(parent, area2);
    if(area1 < area2) parent[area2] = area1;
    else parent[area1] = area2;
}

bool findParent(vector<int>& parent, int area1, int area2) {
    area1 = getParent(parent, area1);
    area2 = getParent(parent, area2);
    if(area1 == area2) return true;
    else return false;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // 가장 적은 종류의 비행기를 타고 모든 국가 여행, 가중치 없음
    int TC; cin >> TC;
    for(int i = 0; i < TC; ++i) {
        int N, M; cin >> N >> M; // 국가의 수, 비행기의 종류

        vector<int> parent(N + 1);
        for(int j = 1; j <= N; ++j)
            parent[j] = j;

        vector<Edge> v;
        for(int j = 0; j < M; ++j) {
            int a, b; cin >> a >> b;
            v.push_back(Edge(a, b));
        }
        int gSize = v.size();
        int gCount = 0;
        for(int k = 0; k < gSize; ++k) {
            if(findParent(parent, v[k].area[0], v[k].area[1]) == false) {
                unionParent(parent, v[k].area[0], v[k].area[1]);
                gCount += 1;
            }
        }
        cout << gCount << '\n';
    }
    return 0;
}
