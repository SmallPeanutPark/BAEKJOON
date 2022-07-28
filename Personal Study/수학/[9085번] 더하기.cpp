#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    vector<int> result;
    int T;
    cin >> T;
    int sum = 0;
    for (int i = 0; i < T; ++i) {
        int N;
        cin >> N;
        for (int j = 0; j < N; ++j) {
            int num;
            cin >> num;
            sum += num;
        }
        result.push_back(sum);
        cout << result[i] << '\n';
        sum = 0;
    }
    return 0;
}
