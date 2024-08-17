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
    unordered_set<int> s1;
    cout << "s1.empty() = " << s1.empty() << endl;
    cout << "s1.size()  = " << s1.size() << endl;

    unordered_set<int> s2 = { 1,1,1,1,1,1,9,9,9,9,7,7,7,7 };
    cout << "s2.empty() = " << s2.empty() << endl;
    cout << "s2.size()  = " << s2.size() << endl;

    unordered_multiset<int> ms1 = { 1,1,1,1,1,1,9,9,9,9,7,7,7,7 };
    cout << "ms1.empty() = " << ms1.empty() << endl;
    cout << "ms1.size()  = " << ms1.size() << endl;

    return 0;

}