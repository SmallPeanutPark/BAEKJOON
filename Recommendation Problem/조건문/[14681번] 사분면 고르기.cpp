#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    int X,Y;
    cin >> X >> Y;

    if((X > 0) && (Y > 0)) {
        cout << 1;
    } else if((X < 0) && (Y > 0)) {
        cout << 2;
    } else if((X < 0) && (Y < 0)) {
        cout << 3;
    } else if((X > 0) && (Y < 0)) {
        cout << 4;
    }

    return 0;
}
