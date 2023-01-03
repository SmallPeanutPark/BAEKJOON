#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    vector<int> value;
    for(int i = 0; i < N; ++i) {
        int num; cin >> num;
        value.emplace_back(num);
    }
    sort(value.begin(), value.end()); // 오름 차순 정렬

    int minValue = 0x7fffffff;
    priority_queue<int, vector<int>, greater<int>> answer;
    for(int start = 0; start < N; ++start) {
        int temp = value[start] * -1;
        int location = lower_bound(value.begin(), value.end(), temp) - value.begin();
        for(int end = location - 1; end <= location; ++end) {
            if((end == start) || (end < 0) || (end >= N)) continue;
            int result = abs(value[start] + value[end]);
            if(minValue >= result) {
                minValue = min(minValue, result);
                if(answer.size() == 2) {
                    priority_queue<int, vector<int>, greater<int>> tpq;
                    answer.swap(tpq);
                }
                answer.push(value[start]);
                answer.push(value[end]);
            }
        }
    }
    while(!answer.empty()) {
        cout << answer.top() << ' ';
        answer.pop();
    }
    return 0;
}
