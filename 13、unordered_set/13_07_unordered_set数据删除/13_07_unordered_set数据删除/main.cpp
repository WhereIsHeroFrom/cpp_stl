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
    unordered_set<int> s = { 1,2,3,4,5 };
    s.erase(3);
    printUSet(s);

    unordered_set<int>::iterator it = s.find(4);
    if (it != s.end()) {
        s.erase(it);
    }
    printUSet(s);

    s = { 16,12,33,4,5,6,7,8,9,10,11,12,13,14,15 };
    unordered_set<int>::iterator itl = s.find(12);
    unordered_set<int>::iterator itr = s.find(14);
    s.erase(itl, itr);    // 不建议用
    printUSet(s);

    s.clear();
    printUSet(s);

    return 0;
}