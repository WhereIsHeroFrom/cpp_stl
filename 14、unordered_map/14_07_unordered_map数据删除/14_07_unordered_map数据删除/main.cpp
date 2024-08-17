#include <iostream>
#include <unordered_map>
using namespace std;

void printUMap(const unordered_map<int, int>& m) {
    for (unordered_map<int, int>::const_iterator it = m.begin(); it != m.end(); it++) {
        cout << "key = " << it->first << " " << "value = " << it->second << endl;
    }
    cout << "--------------------------------" << endl;
}

int main() {
    unordered_map<int, int> m;
    m[1] = 1;
    m[2] = 5;
    m[4] = 7;
    m[9] = 8;
    printUMap(m);

    // 1
    m.erase(2);
    printUMap(m);

    // 2
    m.erase(m.begin());
    printUMap(m);

    // 3
    m.erase(m.begin(), m.end());
    printUMap(m);

    // 4
    m[5] = 3;
    m[7] = 7;
    m[9] = 7;
    m[1] = 997;
    printUMap(m);
    m.clear();
    printUMap(m);

    return 0;
}
