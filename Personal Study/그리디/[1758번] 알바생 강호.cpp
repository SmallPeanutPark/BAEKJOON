#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;

    vector<int> people;
    people.push_back(100001);
    for(int i = 0; i < N; ++i) {
        int tip; cin >> tip;
        people.push_back(tip);
    }
    sort(people.begin(), people.end(), greater<int>()); // 내림 차순

    long long maxValue = 0;
    for(int i = 1; i <= N; ++i) {        
        int value = (people[i] - (i - 1));
        if(value > 0) {
            maxValue += value;
        }
    }
    cout << maxValue;
    return 0;
}
