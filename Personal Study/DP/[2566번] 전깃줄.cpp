#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> wire;
vector<int> install;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; // 전깃줄의 개수 
    cin >> N;
    for(int i = 0; i < N; ++i) {
        int a, b; cin >> a >> b;
        wire.push_back({a, b});
    }

    sort(wire.begin(), wire.end()); // 앞 전봇대 오름 차순 정렬

    for(int i = 0; i < N; ++i) {
        if(install.empty()) {
            install.emplace_back(wire[i].second);
        } else {
            if(install.back() < wire[i].second) {
                install.emplace_back(wire[i].second);
            } else {
                auto location = lower_bound(install.begin(), install.end(), wire[i].second);
                *location = wire[i].second;
            }
        }
    }
    cout << N - install.size();
    return 0;
}
