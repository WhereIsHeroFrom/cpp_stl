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
    unordered_map<int, int> m = {
        pair<int, int>(1, 10), pair<int, int>(2, 30), pair<int, int>(4, 30), pair<int, int>(3, 110)
    };
    cout << "m: " << endl;
    printUMap(m);

    // 1. = 对象
    unordered_map<int, int> m1;
    m1 = m;
    cout << "m1: " << endl;
    printUMap(m1);

    // 2. 初始化列表
    unordered_map<int, int> m2;
    m2 = {
        pair<int, int>(5, 10), pair<int, int>(2, 10), pair<int, int>(4, 31), pair<int, int>(3,610)
    };
    cout << "m2: " << endl;
    printUMap(m2);


    return 0;
}