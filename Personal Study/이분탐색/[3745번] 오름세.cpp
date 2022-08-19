#include <bits/stdc++.h>
using namespace std;

vector<int> day;
int main(void) {
    int n;
    while(cin >> n) {
        for(int i = 0; i < n; ++i) {
            int daycnt; cin >> daycnt;
            if(day.empty()) {
                day.emplace_back(daycnt);
            } else {
                if(day.back() < daycnt) {
                    day.emplace_back(daycnt);
                } else {
                    auto daylocation = lower_bound(day.begin(), day.end(), daycnt);
                    *daylocation = daycnt;
                }
            }
        }
        cout << day.size() << '\n';
        day.clear();
    }
}
