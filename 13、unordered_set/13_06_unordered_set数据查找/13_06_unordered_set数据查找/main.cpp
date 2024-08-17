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
    unordered_set <int> s = { 1,2,3,4,5 };
    unordered_set<int>::iterator it = s.find(3);
    if (it != s.end()) {
        cout << "find : " << *it << endl;
    }
    it = s.find(10);
    if (it == s.end()) {
        cout << "can't find: 10 " << endl;
    }



    return 0;
}