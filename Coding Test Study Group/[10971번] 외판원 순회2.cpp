#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N; // 도시의 수
int W[10][10];
int result = 1e9; // 비교

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    cin >> N;

    // 길 셋팅
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> W[i][j];
        }
    }

    // next_permutation 을 사용하기 위해 첫 순열 만들어줌(오름차순이여야함)
    vector<int> first(N);
    for (int i = 0; i < N; ++i) {
        first[i] = i;
    }
    // 예제대로하면 0 1 2 3 으로 나열

    do {
        bool isCan = true;
        int sum = 0;
        for (int i = 0; i < N - 1; ++i) {
            if (W[first[i]][first[i + 1]] != 0) {
                sum += W[first[i]][first[i + 1]];
            }
            else {
                isCan = false;
                break;
            }
        }

        if (isCan == false) continue;

        if (isCan && W[first[N - 1]][first[0]] != 0) {
            sum += W[first[N - 1]][first[0]];
            if (result > sum) result = sum;
        }
    } while (next_permutation(first.begin(), first.end()));

    cout << result;
}
