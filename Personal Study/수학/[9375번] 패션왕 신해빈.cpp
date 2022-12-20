#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int TC; cin >> TC;
    for(int i = 0; i < TC; ++i) {
        int clothescount; cin >> clothescount;
        map<string, int> wearClothes;
        for(int j = 0; j < clothescount; ++j) {
            string clothes, kind;
            cin >> clothes >> kind; // 옷, 종류
            wearClothes[kind] += 1;
        }
        int answer = 1;
        for(auto iter = wearClothes.begin(); iter != wearClothes.end(); ++iter) {
            answer *= (iter->second + 1); // +1의 의미 : 옷의 종류에서 안입는 경우(NONE)
        }
        answer -= 1; // 아무것도 안입는 경우의 수(나체)
        cout << answer << '\n';
    }
    return 0;
}
