#include <iostream>

using namespace std;

bool checked[1001];
int N, K;
int answer = 0;

void checkPrime(int N) {
    for (int i = 2; i <= N; ++i) {
        if (!checked[i]) continue;
        checked[i] = false;
        answer += 1;
        if (answer == K) {
            cout << i;
        }
        for (int j = i * i; j <= N; j += i) {
            if (checked[j]) {
                answer += 1;
                checked[j] = false;
                if (answer == K) {
                    cout << j;
                }
            }

        }
    }
}

int main(void) {
    fill(checked, checked + 1001, true);
    cin >> N >> K;
    checkPrime(N);
    return 0;
}
