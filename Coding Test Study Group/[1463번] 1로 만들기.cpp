#include <cmath>
#include <iostream>
using namespace std;

int save[1000001] = { 0, };

int dp(int x) {
    if (x == 1) return 0;
    if ((x == 2) || (x == 3)) return 1;


    if (save[x] != 0) return save[x];


    if ((x % 2 == 0) && (x % 3 == 0)) {
        return save[x] = min(dp(x / 2) + 1, dp(x / 3) + 1);
    }
    else if (x % 2 == 0) {
        return save[x] = min(dp(x - 1) + 1, dp(x / 2) + 1);
    }
    else if (x % 3 == 0) {
        return save[x] = min(dp(x - 1) + 1, dp(x / 3) + 1);
    }
    else {
        return save[x] = dp(x - 1) + 1;
    }
}


int main() {
    int X;
    cin >> X;
    int result = dp(X);
    cout << result;
    return 0;
}
