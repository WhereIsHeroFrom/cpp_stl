#include <iostream>
#include <list>
using namespace std;

void printList(const list<int>& l) {
    for (list<int>::const_iterator it = l.begin(); it != l.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int getListItemByIndex(list<int>& l, int index) {
    list<int> ::iterator it = l.begin();
    while (index) {
        it++;
        index--;
    }
    return *it;
}

int main() {
    list<int> l = { -1, 9, 8, 5, 2, 1, 1, -1 };

    // l[4];         无法进行随机访问
    // l.at(6);

    list<int>::iterator it = l.begin();
    // it = it + 100000000;
    cout << getListItemByIndex(l, 4) << endl;

    cout << l.front() << endl;
    cout << l.back() << endl;

    return 0;
}