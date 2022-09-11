#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    
    for(int i = 0; i < n; ++i) {
        int num; cin >> num;
        v.emplace_back(num);
    }
    sort(v.begin(), v.end());
    for(int element : v) {
        cout << element << ' ';
    }
}
