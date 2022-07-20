#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
    int N;
    cin >> N;
    vector<int> v;
    for(int i = 1; i <= N; ++i) {
        int n;
        cin >> n;
        v.push_back(n);
    }
    int len = v.size();
    sort(v.begin(), v.end());
    for(int i = 0; i < len; ++i) {
        cout << v[i] << '\n';
    }
    return 0;
}
