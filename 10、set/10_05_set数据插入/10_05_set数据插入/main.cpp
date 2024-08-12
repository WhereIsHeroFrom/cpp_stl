#include<iostream>
#include<set>
#include <vector>
using namespace std;

void printSet(const set<int>& s) {
    for (set<int>::const_iterator it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    set<int> s;

    // O(logn)

    s.insert(3); printSet(s);
    s.insert(2); printSet(s);
    s.insert(5); printSet(s);
    s.insert(4); printSet(s);
    s.insert(1); printSet(s);

    vector<int> v = { 0, 5, 6, 9 ,8 };
    s.insert(v.begin(), v.end());
    printSet(s);
    return 0;
}