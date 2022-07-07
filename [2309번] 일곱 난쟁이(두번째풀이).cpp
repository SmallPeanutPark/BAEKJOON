#include <bits/stdc++.h>
using namespace std;

int arr[9];

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);
  int sum = 0;
  for(int i = 0; i < 9; i++) {
    cin >> arr[i]; // 입력(키)을 받고
    sum += arr[i]; // 입력(키)를 다 더해준다.
  }

  std::sort(arr, arr+9); // 오름 차순 정렬

    // 9명중 2명을 뽑는 for 문
  for(int i = 0; i < 8; ++i) {
    for(int j = i+1; j < 9; ++j) {
        if((sum -(arr[i] + arr[j])) == 100) { // 난쟁이 2명을 제외하고 합이 100이 될 때 -> 성공
            for(int k = 0; k < 9; ++k) {    
                if((k != i) && (k != j)) { // 난쟁이 2명을 제외한 7명 난쟁이만 포함할때 출력
                    cout << arr[k] << '\n';
                }
            }
            return 0;
        }
    }
  }

    return 0;
}
