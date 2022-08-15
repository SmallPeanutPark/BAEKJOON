#include <bits/stdc++.h>
using namespace std;

int asc[8] = {1, 2, 3, 4, 5, 6, 7, 8};
int des[8] = {8, 7, 6, 5, 4, 3, 2, 1};

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[8];
    fill(arr, arr + 8, 0);
    for(int i = 0; i < 8; ++i) {
        int n; cin >> n;
        arr[i] = n;
    }

    // 오름차순 인지 확인
    bool isasc = false;
    for(int i = 0; i < 8; ++i) {
        if(arr[i] == asc[i]) {
            isasc = true;
        } else {
            isasc = false;
            break;
        }
    }
    if(isasc) {
        cout << "ascending";
        return 0;
    }

    // 내림 차순인지 확인
    bool isdes = false;
    for(int i = 0; i < 8; ++i) {
        if(arr[i] == des[i]) {
            isdes = true;
        } else {
            isdes = false;
            break;
        }
    }

    if(isdes) {
        cout << "descending";
        return 0;        
    }
    cout << "mixed";
    return 0;
}
