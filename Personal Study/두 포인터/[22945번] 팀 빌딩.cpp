#include <bits/stdc++.h>
using namespace std;
vector<int> developer;

void input(int N) {
    developer.emplace_back(0);
    for(int i = 0; i < N; ++i) {
        int n; cin >> n;
        developer.emplace_back(n);
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    input(N);
    int gMax = 0;
    int start = 1; int end = N;
    while(start < end) {
        int betweenPerson = end - start - 1;
        gMax = max(gMax, betweenPerson*min(developer[start], developer[end]));
        if(developer[start] < developer[end]) {
            start++;
        } else {
            end--;
        }
    }
    cout << gMax << '\n';
    return 0;
}
