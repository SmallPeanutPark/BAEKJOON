#include <bits/stdc++.h>
using namespace std;

int addNumber(const string& str) {
    int sum = 0;
    for(int i = 0; i < str.length(); ++i) {
        if(!isalpha(str[i])) {
            sum += (str[i] - '0');
        }
    }
    return sum;
}

bool cmp(const string& x, const string& y) {
    if(x.length() != y.length()) {
        int xlen = x.length();
        int ylen = y.length();
        if(xlen > ylen) return false;
        else return true;
    } else if(x.length() == y.length()) {
        int xSum = 0;
        int ySum = 0;
        xSum = addNumber(x);
        ySum = addNumber(y);
        if(xSum != ySum) return xSum < ySum;
    } 
    return x < y;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    vector<string> v;
    for(int i = 0; i < N; ++i) {
        string str; cin >> str;
        v.emplace_back(str);
    }
    sort(v.begin(), v.end(), cmp);
    for(string element : v) {
        cout << element << '\n';
    }
    return 0;
}
