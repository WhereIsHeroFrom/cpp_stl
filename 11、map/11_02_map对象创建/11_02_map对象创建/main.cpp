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
    // 1. 默认构造函数
    map<int, int> m1;
    cout << "m1: " << endl;
    printMap(m1);

    // 2. 初始化列表
    map<int, int> m2_1 = {
        pair<int, int>(1, 10),
        pair<int, int>(4, 24),
        pair<int, int>(3, 43),
        pair<int, int>(2, 15)
    };
    cout << "m2_1: " << endl;
    printMap(m2_1);

    map<int, int> m2_2 ({
        pair<int, int>(1, 18),
        pair<int, int>(4, 23),
        pair<int, int>(3, 41),
        pair<int, int>(2, 11)
    });
    cout << "m2_2: " << endl;
    printMap(m2_2);

    // 3. 迭代器
    map<int, int> m3(m2_1.begin(), m2_1.end());
    cout << "m3: " << endl;
    printMap(m3);

    // 4. 拷贝构造
    map<int, int> m4(m2_2);
    cout << "m4: " << endl;
    printMap(m4);

    return 0;
}