#include <bits/stdc++.h>
using namespace std;

vector<int> road;
vector<int> usedwire;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    for(int i = 0; i < N; ++i) {
        int n; cin >> n;
        road.emplace_back(n);
    }

    for(int element : road) {
        if(usedwire.empty()) {
            usedwire.emplace_back(element);
        } else {
            if(usedwire.back() < element) {
                usedwire.emplace_back(element);
            } else {
                auto location = lower_bound(usedwire.begin(), usedwire.end(), element);
                *location = element;
            }
        }
    }
    cout << N - usedwire.size();
    return 0;
}
