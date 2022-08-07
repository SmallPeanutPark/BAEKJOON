#include <bits/stdc++.h>
using namespace std;

int save[101];

int main(void) {
    int sum = 0;
    for(int i = 0; i < 10; ++i) {
        int n;
        cin >> n;
        sum += n;
        save[n/10] += 1;
    }
    cout << sum / 10 << '\n';
    int maxValue = 0;
    int index = 0;
    for(int i = 0; i < 100; ++i) {
        maxValue = max(maxValue, save[i]);
        if(maxValue == save[i]) {
            index = i * 10;
        }
    }
    cout << index << '\n';
    return 0;
}
