#include <bits/stdc++.h>
using namespace std;


void swap(int& arr, int& arr2) {
    int b = arr2;
    arr2 = arr;
    arr = b;
}

void print(int arr[]) {
    for (int i = 1; i < 21; ++i) {
        cout << arr[i] << ' ';
    }
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int card[21] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    vector<pair<int, int>> save;

    for (int i = 0; i < 10; ++i) {
        int a; int b;
        cin >> a >> b;
        save.push_back(make_pair(a, b)); // 입력이 저장이됨 first = a구간 second = b구간
    }

    for (int i = 0; i < 10; ++i) {
        int first_ = save[i].first; // a
        int second_ = save[i].second; // b
        
        int number = (abs(first_ - second_) + 1) / 2;

        for (int j = 0; j < number; ++j) {
            swap(card[first_], card[second_]);
            first_ += 1;
            second_ -= 1;
        }
    }

    print(card);

    return 0;
}
