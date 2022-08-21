#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string str1;
    int A, B; cin >> A >> B;
    str1 += to_string(A);
    str1 += to_string(B);

    string str2;
    int C, D; cin >> C >> D;
    str2 += to_string(C);
    str2 += to_string(D);

    long long sum = stoll(str1) + stoll(str2);
    cout << sum;
}
