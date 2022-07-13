#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }

    for(int i = 2; i <= sqrt(num); ++i) {
        if(num % i == 0) return false;
    }
    return true;
}


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int N;
    int answer = 0;
    vector<int> v;
    cin >> N;
    for(int i = 0; i < N; ++i) {
        int n;
        cin >> n;
        v.push_back(n);
    }
    int len = v.size();
    for(int i = 0; i < len; ++i) {
        if(isPrime(v[i])) {
            ++answer;
        }
    }
    cout << answer << '\n';
    return 0;
}
