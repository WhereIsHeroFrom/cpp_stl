#include <iostream>
#include <list>
using namespace std;

void printList(const list<int>& l) {
    for (list<int>::const_iterator it = l.begin(); it != l.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

bool cmp(const int& a, const int& b) {
    return a > b;
}

int main() {
    list<int> l = { 4,2,6,5,3,1 };
    l.sort();
    printList(l);
    l.sort(cmp);
    printList(l);

    return 0;
}
