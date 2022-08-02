#include <bits/stdc++.h>
using namespace std;
/* 
2부터 N까지 모든 정수를 적는다.
아직 지우지 않은 수 중 가장 작은 수를 찾는다. 이것을 P라고 하고, 이 수는 소수이다.
P를 지우고, 아직 지우지 않은 P의 배수를 크기 순서대로 지운다.
아직 모든 수를 지우지 않았다면, 다시 2번 단계로 간다.
*/

int N, K;
bool ischecked[1001];
int primecnt = 0;

void removeNumber(int N) {
    // 에라토스테네스의 체 적용
    ischecked[1] = false; // 소수 아님
    for(int i = 2; i <= N; ++i) {
        if(!ischecked[i]) continue; // 소수가 아닌 값들은 제외
        primecnt += 1;
        if(primecnt == K) cout << i;
        for(int j = i * i; j <= N; j += i) {
            if(ischecked[j]) {
                // 아직 지우지 않은 배수들을 크기 순서대로 지운다
                ischecked[j] = false;
                primecnt += 1;
                if(primecnt == K) cout << j;
            }
        }
    }
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N >> K; // N은 수의 범위, K는 K번째 지우는 수
    fill(ischecked, ischecked + 1001, true); // 모든 수가 소수라 가정
    removeNumber(N);
}
