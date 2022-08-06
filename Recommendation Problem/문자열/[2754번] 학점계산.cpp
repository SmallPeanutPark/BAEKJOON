#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    map<string, double> m;
    m.insert({"A+", 4.3}); m.insert({"A0", 4.0}); m.insert({"A-", 3.7});
    m.insert({"B+", 3.3}); m.insert({"B0", 3.0}); m.insert({"B-", 2.7});
    m.insert({"C+", 2.3}); m.insert({"C0", 2.0}); m.insert({"C-", 1.7});
    m.insert({"D+", 1.3}); m.insert({"D0", 1.0}); m.insert({"D-", 0.7});
    m.insert({"F", 0.0});
    string cnumber;
    cin >> cnumber;
    auto iter = m.find(cnumber);
    cout.setf(ios::fixed);
    cout.precision(1);
    cout << iter->second;
    return 0;
}
