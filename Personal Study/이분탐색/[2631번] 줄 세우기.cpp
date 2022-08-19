#include <bits/stdc++.h>
using namespace std;

vector<int> people;
vector<int> sortpeople;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    for(int i = 0; i < N; ++i) {
        int n; cin >> n;
        people.emplace_back(n);
    }

    int ans = 0;
    for(int element : people) {
        if(sortpeople.empty()) {
            sortpeople.emplace_back(element);
        } else {
            if(sortpeople.back() < element) {
                sortpeople.emplace_back(element);
            } else {
                auto location = lower_bound(sortpeople.begin(), sortpeople.end(), element);
                *location = element;
            }
        }
    }
    cout << N - sortpeople.size();
    return 0;
}
