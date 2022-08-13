#include <bits/stdc++.h>
using namespace std;

double arr[1001];

int main(void) {
    int TC; 
    cin >> TC;
    for(int i = 0; i < TC; ++i) {
        int N; cin >> N;
        fill(arr, arr + 1001, 0);
        double sum = 0;
        for(int j = 0; j < N; ++j) {
            double num; cin >> num;
            arr[j] = num;
            sum += num;
        }
        double ref = sum / N; // 평균
        double cnt = 0;
        for(int j = 0; j < N; ++j) {
            if(ref < arr[j]) {
                cnt += 1;
            }
        }
        double d = ((cnt * pow(10, 2)) / N); // 비율
        d *= pow(10, 3);
        double roundnumber = round(d);
        roundnumber /= pow(10, 3);
        cout.precision(3);
        cout.setf(ios::fixed);
        cout << roundnumber << '%' << '\n';
    }
}
