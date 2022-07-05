#include <iostream>
#include <algorithm>
#include <vector>

int main(void) {
    std::ios::sync_with_stdio(false);
    int num1, num2, num3;
    std::cin>> num1 >> num2 >> num3;
    std::vector<int> v;
    v.push_back(num1);
    v.push_back(num2);
    v.push_back(num3);

    std::sort(v.begin(), v.end());

    std::cout << v[0] << " " << v[1] << " " << v[2];

    return 0;       
}
