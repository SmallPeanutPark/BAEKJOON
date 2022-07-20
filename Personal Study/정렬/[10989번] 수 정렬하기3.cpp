#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arr[10001] = {0,};

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;
    
    for(int i = 0; i < N; ++i) {
        int n;
        cin >> n;
        arr[n] += 1;
    }

    for(int i = 1; i <= 10000; ++i) {
        if(arr[i] != 0)
        {
            for(int j = 0; j < arr[i]; ++j)
                cout << i << '\n';
        }
    }
    return 0;
}
