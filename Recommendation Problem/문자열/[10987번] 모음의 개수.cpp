#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string str;
    cin >> str;
    int len = str.length();
    int sum = 0;
    for(int i = 0; i < len; ++i) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            sum += 1;
        }
    }
    cout << sum;
    return 0;
}
