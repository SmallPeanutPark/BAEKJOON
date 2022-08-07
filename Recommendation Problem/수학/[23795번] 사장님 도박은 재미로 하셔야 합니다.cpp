#include <bits/stdc++.h>
using namespace std;

int main(void) {
    
    int n;
    int sum =0;
    while(cin >> n) {
        if(n == -1) break;
        sum += n;
    }
    cout << sum;
}
