#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

    int N;
    cin >> N; // N개의 정수
    vector<int> v;
    for(int i = 0; i < N; ++i) {
        int value;
        cin >> value; // 정수가 공백으로 구분되어져있다.
        v.push_back(value); 
    }

    int findnumber;
    cin >> findnumber; // 찾고자 하는 정수

    int ans = 0;
    for(int element : v) {
        if(element == findnumber) {
            ++ans; // 찾는 경우 +1
        }
    }

    cout << ans;

	return 0;
}
