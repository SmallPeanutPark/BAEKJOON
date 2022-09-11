#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<pair<int, int>> total;
    for(int i = 1; i <= 8; ++i) {
        int num; cin >> num;
        total.emplace_back(make_pair(num, i));
    }
    sort(total.begin(), total.end(), greater<pair<int, int>>());
    int sum = 0;
    vector<int> problem_number;
    for(int i = 0; i < 5; ++i) {
        sum += total[i].first;
        problem_number.emplace_back(total[i].second);
    }
    cout << sum << '\n';
    sort(problem_number.begin(), problem_number.end());
    for(int element : problem_number) {
        cout << element << ' ';
    }
    return 0;
}
