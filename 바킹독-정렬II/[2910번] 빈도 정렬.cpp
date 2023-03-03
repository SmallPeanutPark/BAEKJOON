#include <bits/stdc++.h>
using namespace std;
vector<long long> v;
map<long long, pair<int, int>> m; // 값, 횟수, 위치 순서
// 수열의 두 수 X와 Y가 있을 때, X가 Y보다 수열에서 많이 등장하는 경우에는 
// X가 Y보다 앞에 있어야 한다. 
// 만약, 등장하는 횟수가 같다면, 먼저 나온 것이 앞에 있어야 한다.
// 이렇게 정렬하는 방법을 빈도 정렬

void input(int N) {
    for(int i = 0; i < N; ++i) {
        long long n; cin >> n;
        auto result = m.find(n);
        if(result != m.end()) { 
            int count = result->second.first + 1;
            int location = result->second.second;
            m[n] = make_pair(count, location);
        } else {
            m.insert(make_pair(n, make_pair(1, i)));
        }
    }
}

bool cmp(tuple<int, int, long long> a, tuple<int, int, long long> b) {
    if(get<0>(a) == get<0>(b)) {
        if(get<1>(a) < get<1>(b)) return true;
        else return false; 
    } else {
        if(get<0>(a) < get<0>(b)) {
            return false;
        } else return true;
    }
}

void cal() {
    vector<tuple<int, int, long long>> vp; // 횟수, 위치, 값 순서
    for(auto iter = m.begin(); iter != m.end(); ++iter) {
        vp.push_back(make_tuple(iter->second.first, iter->second.second, iter->first));
    }
    sort(vp.begin(), vp.end(),cmp);
    for(tuple<int, int, long long> element : vp) {
        int count = get<0>(element);
        long long value = get<2>(element);
        for(int i = 0; i < count; ++i) {
            cout << value << ' ';
        }
    }
    return;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, C; cin >> N >> C;
    input(N);
    cal();
    return 0;
}
