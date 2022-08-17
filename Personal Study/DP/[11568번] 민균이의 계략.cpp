#include <bits/stdc++.h>
using namespace std;

vector<int> card;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N; // 제시한 카드의 개수
    for(int i = 0; i < N; ++i) {
        int cardNumber; cin >> cardNumber;
        if(card.empty()) {
            card.emplace_back(cardNumber);
        } else {
            if(card.back() < cardNumber) {
                card.emplace_back(cardNumber);
            } else {
                auto location = lower_bound(card.begin(), card.end(), cardNumber);
                *location = cardNumber;
            }
        }
    }
    cout << card.size();
    return 0;
}
