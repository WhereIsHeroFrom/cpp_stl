#include <iostream>
#include <unordered_set>
using namespace std;


void printUSet(const unordered_set<int>& s) {
    for (unordered_set<int>::const_iterator it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    // 1. 默认构造函数
    unordered_set<int> s1;
    cout << "s1: ";
    printUSet(s1);

    // 2. 初始化列表
    unordered_set<int> s2_1 = { 9,8,7,5,6,1,2,3,4 };
    cout << "s2_1: ";
    printUSet(s2_1);

    unordered_set<int> s2_2 ( { 9,8,7,5,6,1,2,3,4,6,6,6,6,6 } );
    cout << "s2_2: ";
    printUSet(s2_2);

    // 3. 迭代器
    unordered_set<int> s3(s2_1.begin(), s2_1.end());
    cout << "s3: ";
    printUSet(s3);

    // 4. 拷贝构造
    unordered_set<int> s4(s2_2);
    cout << "s4: ";
    printUSet(s4);

    return 0;
}