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
    unordered_set<int> s;

    s.insert(3); printUSet(s);
    s.insert(2); printUSet(s);
    s.insert(5); printUSet(s);
    s.insert(4); printUSet(s);
    s.insert(1); printUSet(s);
    s.insert(9); printUSet(s);
    s.insert(8); printUSet(s);
    s.insert(6); printUSet(s);

    vector<int> v = { 1,9,9,7 };
    s.insert(v.begin(), v.end());
    printUSet(s);

    return 0;
}
