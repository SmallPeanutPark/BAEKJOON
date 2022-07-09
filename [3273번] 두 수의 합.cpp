#include <bits/stdc++.h>
using namespace std;
int tmp[2000001] = {0, }; // 값 유무 확인 배열
int arr[1000000] = { 0, }; // 값 저장

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);


	int n, X;
	
	cin >> n; //  개수

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i]; // 수열
	}
	cin >> X; // X

	sort(arr, arr + n); // 오름 차순 정렬
	// ai + aj = X 만족, aj = X - ai
	int ans = 0;
	for (int i = 0; i < n; ++i) {
                                    // 인덱스 음수 방지 
		if ((tmp[X - arr[i]] == 1) && (X - arr[i] > 0)) {
			++ans;
		}
		tmp[arr[i]] = 1;
	}

	cout << ans;

	return 0;
}
