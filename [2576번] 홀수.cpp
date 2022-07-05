#include <iostream>
#include <algorithm>
#include <vector>

int main(void) {
    std::ios::sync_with_stdio(false);
    
    std::vector<int> oddvector;
    
    for(int i = 0; i < 7; ++i) {
        int a;
        std::cin >> a;
        if (a % 2 != 0) {
            // 홀수
            oddvector.push_back(a);
        } 
    }

    int total = 0;
    bool isodd = false;
    // 벡터가 비어있지 않을 때
    if (!oddvector.empty()) {
        for(int i = 0; i < oddvector.size(); ++i) {
            if(oddvector[i] % 2 != 0) {
                // 홀수
                isodd = true;
                total += oddvector[i];
            } else {
                // 짝수
            }
        }
    }

    if (isodd) {
        std::cout << total << '\n';
        std::sort(oddvector.begin(), oddvector.end());
        std::cout << oddvector[0];
    } else {
        // 짝수만 있음
        std::cout << -1;
    }

    return 0;
}
