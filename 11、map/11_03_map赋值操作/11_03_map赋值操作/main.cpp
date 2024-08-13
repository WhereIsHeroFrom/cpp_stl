#include <iostream>
#include <map>
using namespace std;

void printMap(const map<int, int>& m) {
    for (map<int, int>::const_iterator it = m.begin(); it != m.end(); it++) {
        // it->first,  it->second
        cout << "key = " << it->first << " " << " value = " << it->second << endl;
    }
    cout << "----------------------------" << endl;
}

int main() {
    map<int, int> m = {
        pair<int, int>(1, 10),
        pair<int, int>(4, 24),
        pair<int, int>(3, 43),
        pair<int, int>(2, 15),
    };
    cout << "m: " << endl;
    printMap(m);

    // 1. = 对象
    map<int, int> m1;
    m1 = m;
    cout << "m1: " << endl;
    printMap(m1);

    // 2. = 初始化列表
    map<int, int> m2;
    m2 = {
        pair<int, int>(1, 8),
        pair<int, int>(4, 36),
        pair<int, int>(3, 18),
        pair<int, int>(2, 22),
    };
    cout << "m2: " << endl;
    printMap(m2);


    return 0;
}
