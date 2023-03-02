#include <bits/stdc++.h>
using namespace std;
vector<string> vs;

void input(int n) {
    for(int i = 0; i < n; ++i) {
        string temp; cin >> temp;
        vs.emplace_back(temp);
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    input(n);

    vector<long long> t;
    for(string element : vs) {
        reverse(element.begin(), element.end());
        t.emplace_back(stoll(element));
    }
    sort(t.begin(), t.end());
    for(long long element : t) {
        cout << element << '\n';
    }
    
    return 0;
}
