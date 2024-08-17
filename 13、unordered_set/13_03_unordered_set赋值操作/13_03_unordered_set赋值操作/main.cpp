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
    unordered_set<int> s = { 9,8,5,2,1,1 };
    cout << "s: ";
    printUSet(s);

    // 1. = set对象
    unordered_set <int> s1;
    s1 = s;
    cout << "s1: ";
    printUSet(s1);

    // 2. = 初始化列表
    unordered_set<int> s2;
    s2 = { 3, 4, 7, 6, 7, 8 ,9 , 2, 1 };
    cout << "s2: ";
    printUSet(s2);

    return 0;
}
