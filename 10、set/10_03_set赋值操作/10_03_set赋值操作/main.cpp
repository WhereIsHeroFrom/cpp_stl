#include <iostream>
#include <set>
using namespace std;

void printSet(const set<int>& s) {
    for (set<int>::const_iterator it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    set<int> s = { 9,8,5,2,1,1 };
    cout << "s: ";
    printSet(s);

    // 1. = set 对象
    set<int> s1;
    s1 = s;
    cout << "s1: ";
    printSet(s1);

    // 2. = 初始化列表
    set<int> s2;
    s1 = (s2 = { 3, 4, 5 });
    cout << "s2: ";
    printSet(s2);


    return 0;
}