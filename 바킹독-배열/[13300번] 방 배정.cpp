#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int N; // // 수학 여행에 참가하는 학생 수 (1<= N <= 1000)
    int K; // 한방에 배정할 수 있는 최대 인원 수 (1< K <= 1000)
    cin >> N >> K;

    map<pair<int, int>, int> mp;// 1~6학년 남/여 정보 저장(key) - 학생 수(value)
    for (int i = 0; i < N; ++i) {
        int S; // 성별
        int Y; // 학년
        cin >> S >> Y;
        // key 값(성별, 학년)을 찾았을 때
        if (mp.find(make_pair(S, Y)) != mp.end()) {
            // 인원 추가
            mp[make_pair(S, Y)] += 1;
        }
        else {
            // key 값 없음으로 insert
            mp.insert({ make_pair(S, Y), 1 });
        }
    }

    int room = 0;
    map<pair<int, int>, int>::iterator iter;
    for (iter = mp.begin(); iter != mp.end(); ++iter) {
        switch (iter->first.second) {
        case 1:
            if (iter->first.first == 0) {
                // 여학생
                if (iter->second <= K) {
                    ++room;
                }
                else {
                    int cal = (iter->second / K); // 몫
                    int cal1 = (iter->second % K); // 나머지
                    room += cal;
                    if ((cal1 > 0) && (cal1 <= K)) {
                        ++room;
                    }
                }
            }
            else {
                // 남학생
                if (iter->second <= K) {
                    ++room;
                }
                else {
                    int cal = (iter->second / K); // 몫
                    int cal1 = (iter->second % K); // 나머지
                    room += cal;
                    if ((cal1 > 0) && (cal1 <= K)) {
                        ++room;
                    }
                }
            }
            break;
        case 2:
            if (iter->first.first == 0) {
                // 여학생
                if (iter->second <= K) {
                    ++room;
                }
                else {
                    int cal = (iter->second / K); // 몫
                    int cal1 = (iter->second % K); // 나머지
                    room += cal;
                    if ((cal1 > 0) && (cal1 <= K)) {
                        ++room;
                    }
                }
            }
            else {
                // 남학생
                if (iter->second <= K) {
                    ++room;
                }
                else {
                    int cal = (iter->second / K); // 몫
                    int cal1 = (iter->second % K); // 나머지
                    room += cal;
                    if ((cal1 > 0) && (cal1 <= K)) {
                        ++room;
                    }
                }
            }
            break;
        case 3:
            if (iter->first.first == 0) {
                // 여학생
                if (iter->second <= K) {
                    ++room;
                }
                else {
                    int cal = (iter->second / K); // 몫
                    int cal1 = (iter->second % K); // 나머지
                    room += cal;
                    if ((cal1 > 0) && (cal1 <= K)) {
                        ++room;
                    }
                }
            }
            else {
                // 남학생
                if (iter->second <= K) {
                    ++room;
                }
                else {
                    int cal = (iter->second / K); // 몫
                    int cal1 = (iter->second % K); // 나머지
                    room += cal;
                    if ((cal1 > 0) && (cal1 <= K)) {
                        ++room;
                    }
                }
            }
            break;
        case 4:
            if (iter->first.first == 0) {
                // 여학생
                if (iter->second <= K) {
                    ++room;
                }
                else {
                    int cal = (iter->second / K); // 몫
                    int cal1 = (iter->second % K); // 나머지
                    room += cal;
                    if ((cal1 > 0) && (cal1 <= K)) {
                        ++room;
                    }
                }
            }
            else {
                // 남학생
                if (iter->second <= K) {
                    ++room;
                }
                else {
                    int cal = (iter->second / K); // 몫
                    int cal1 = (iter->second % K); // 나머지
                    room += cal;
                    if ((cal1 > 0) && (cal1 <= K)) {
                        ++room;
                    }
                }
            }
            break;
        case 5:
            if (iter->first.first == 0) {
                // 여학생
                if (iter->second <= K) {
                    ++room;
                }
                else {
                    int cal = (iter->second / K); // 몫
                    int cal1 = (iter->second % K); // 나머지
                    room += cal;
                    if ((cal1 > 0) && (cal1 <= K)) {
                        ++room;
                    }
                }
            }
            else {
                // 남학생
                if (iter->second <= K) {
                    ++room;
                }
                else {
                    int cal = (iter->second / K); // 몫
                    int cal1 = (iter->second % K); // 나머지
                    room += cal;
                    if ((cal1 > 0) && (cal1 <= K)) {
                        ++room;
                    }
                }
            }
            break;
        case 6:
            if (iter->first.first == 0) {
                // 여학생
                if (iter->second <= K) {
                    ++room;
                }
                else {
                    int cal = (iter->second / K); // 몫
                    int cal1 = (iter->second % K); // 나머지
                    room += cal;
                    if ((cal1 > 0) && (cal1 <= K)) {
                        ++room;
                    }
                }
            }
            else {
                // 남학생
                if (iter->second <= K) {
                    ++room;
                }
                else {
                    int cal = (iter->second / K); // 몫
                    int cal1 = (iter->second % K); // 나머지
                    room += cal;
                    if ((cal1 > 0) && (cal1 <= K)) {
                        ++room;
                    }
                }
            }
            break;
        };
    }

    cout << room;

    return 0;
}
