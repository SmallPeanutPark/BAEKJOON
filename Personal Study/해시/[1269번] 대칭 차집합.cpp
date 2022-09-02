#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int A, B; cin >> A >> B; // A원소 개수, B원소 개수
    map<int, int> m_a;
    map<int, int> temp;
    map<int, int> m_b;
    for (int i = 0; i < A; ++i) {
        int n; cin >> n;
        m_a.insert({ n, 0 });
    }
    temp = m_a;
    for (int i = 0; i < B; ++i) {
        int n; cin >> n;
        m_b.insert({ n, 0 });
    }

    for (auto iter = m_b.begin(); iter != m_b.end(); ++iter) {
        int value = iter->first;
        if (m_a.find(value) != m_a.end()) {
            m_a.erase(value);
        }
    }

    for (auto iter = temp.begin(); iter != temp.end(); ++iter) {
        int value = iter->first;
        if (m_b.find(value) != m_b.end()) {
            m_b.erase(value);
        }
    }
    cout << m_a.size() + m_b.size();
    
}
