#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string str;
    cin >> str;
    int len = str.length();
    long long sum = 0;
    for(int i = 0; i < len; ++i) {
        long long result = str[i] - '0';
        result = pow(result, 5);
        sum += result;
    }
    cout << sum;
}
