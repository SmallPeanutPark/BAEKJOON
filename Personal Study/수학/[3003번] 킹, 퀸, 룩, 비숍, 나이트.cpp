#include <bits/stdc++.h>
using namespace std;

int chessboard[6] = {1, 1, 2, 2, 2, 8};
int arr[6];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    fill(arr, arr + 6, 0);
    for(int i = 0; i < 6; ++i) {
        int n; cin >> n;
        int answer = 0;
        if(chessboard[i] != n) { 
            while(true) {
                if(n == chessboard[i]) break;
                if(n > chessboard[i]) {
                    chessboard[i] += 1;
                    answer -= 1;
                } else {
                    // n < chessboard[i]
                    chessboard[i] -= 1;
                    answer += 1;
                }
            }
            arr[i] = answer;
        }
    }
    for(int element : arr) {
        cout << element << ' ';
    }
}
