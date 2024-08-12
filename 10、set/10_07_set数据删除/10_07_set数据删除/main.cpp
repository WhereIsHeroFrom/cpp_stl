#include<iostream>
#include<set>
using namespace std;

void printSet(const set<int>& s) {
    for (set<int>::const_iterator it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    set<int> s = { 1,2,3,4,5 };
    s.erase(3);
    printSet(s);

    set<int>::iterator rm = s.find(4);
    if (rm != s.end()) {
        s.erase(rm);
    }
    printSet(s);
         // [   )
    s = { 1,2,3,4,5 };
    set<int>::iterator rml = s.find(2);
    set<int>::iterator rmr = s.find(4);
    s.erase(rml, rmr);
    printSet(s);
    // cout << *rml << endl;

    return 0;
}