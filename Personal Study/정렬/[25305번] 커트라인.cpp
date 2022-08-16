#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,k; // 응시자 수, 상받는 사람의 수
    cin >> N >> k;
    vector<int> people;
    for(int i = 0; i < N; ++i) {
        int num; cin >> num;
        people.emplace_back(num);
    }
    sort(people.begin(), people.end());
    int location = N - k;
    cout << people[location];
    return 0;
}
