#include <iostream>
#include <unordered_set>
using namespace std;


void printUSet(const unordered_set<int>& s) {
    for (unordered_set<int>::const_iterator it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void printUMSet(const unordered_multiset<int>& s) {
    for (unordered_multiset<int>::const_iterator it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    unordered_set <int> s = { 1,2,3,4,5 };
    for (int i = 0; i < 8; i += 2) {
        cout << "元素：" << i << "的出现次数是 " << s.count(i) << endl;  // has(i)
    }
    printUSet(s);

    unordered_multiset<int> ms = { 1,1,1,1,1,1,1,1,1,2,2,2,2,2,3,3,3,3,3,4,4,4,4,4,7,7,7,7,7 };
    for (int i = 0; i < 8; i += 2) {
        cout << "元素：" << i << "的出现次数是 " << ms.count(i) << endl;
    }
    printUMSet(ms);



    return 0;
}