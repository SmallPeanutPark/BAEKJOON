#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n; // 점의 개수
    cin >> n;
    int q1, q2, q3, q4, axis;
    q1 = 0; q2 = 0; q3 = 0; q4 = 0; axis = 0;
    for(int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        if((x == 0) && ((y == 0) || (y < 0) || (y > 0))) {
            // 축
            axis += 1;
        } else if((y == 0) && ((x == 0) || (x < 0) || (x >0))) {
            // 축
            axis += 1;
        } else if((x > 0) && (y > 0)) {
            // 1사분면
            q1 += 1;
        } else if((x < 0) && (y > 0)) {
            // 2사분면
            q2 += 1;
        } else if((x < 0) && (y < 0)) {
            q3 += 1;
        } else if((x > 0) && (y <0)) {
            q4 += 1;
        } else {}
    }
    cout << "Q1: " << q1 <<'\n';
    cout << "Q2: " << q2 <<'\n';
    cout << "Q3: " << q3 <<'\n';
    cout << "Q4: " << q4 <<'\n';
    cout << "AXIS: " << axis <<'\n';
    
    return 0;
}
