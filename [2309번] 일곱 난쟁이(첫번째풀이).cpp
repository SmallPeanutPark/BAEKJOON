#include <iostream>
#include <algorithm>
#include <vector>

int arr[9];
bool selected[9];
bool istrue = false;
std::vector<int> v;

void DFS(int idx, int cnt) {
    if (cnt == 7) { 
        int sum = 0;
        for (int i = 0; i < 9; ++i) {
            if (selected[i] == true) {
                sum += arr[i];
                v.push_back(arr[i]);
                if (sum == 100) {
                    istrue = true;
                }
            }
        }

        if (istrue) {
            for (int i = 0; i < v.size(); ++i) {
                std::cout << v[i] << '\n';
            }
        }
        else {
            v.clear();
        }
    }

    for (int i = idx; i < 9; ++i) {
        if (istrue) break;

        if (selected[i] == true) continue;
        selected[i] = true;

        DFS(idx, cnt + 1);
        selected[i] = false;
    }
}

int main(void) {
    std::ios::sync_with_stdio(false);
    for (int i = 0; i < 9; ++i) {
        int n;
        std::cin >> n;
        arr[i] = n;
    }
    std::sort(arr, arr + 9);

    DFS(0, 0);

    return 0;
}
