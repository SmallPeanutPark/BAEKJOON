#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    vector<int> v;
    int N;
    cin >> N;
    for(int i = 0; i < N; ++i) {
        int value;
        cin >> value;
        v.push_back(value);
    }

    cout << *min_element(v.begin(), v.end()) << ' ' << *max_element(v.begin(), v.end());

    return 0;
}
