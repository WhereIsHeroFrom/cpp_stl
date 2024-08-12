#include<iostream>
#include<set>
using namespace std;

void printSet(const set<int>& s) {
    for (set<int>::const_iterator it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void printMultiSet(const multiset<int>& s) {
    for (multiset<int>::const_iterator it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    set<int> s = { 1,2,3,4,5 };
    for (int i = 0; i < 8; i += 2) {
        cout << "Ԫ�أ�" << i << "�ĳ��ִ���Ϊ " << s.count(i) << endl;  // s.has(i)
    }
    multiset<int> ms = { 1,1,1,1,1,1,4,4,4,4,4,2,2,2,2,2,2,2,6,6,6,6,6,8,8,8,5,5,5,5,5 };
    for (int i = 0; i < 8; i += 2) {
        cout << "Ԫ�أ�" << i << "�ĳ��ִ���Ϊ " << ms.count(i) << endl;
    }
    printMultiSet(ms);

    return 0;
}
