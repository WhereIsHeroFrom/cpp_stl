#include <iostream>
#include <list>
using namespace std;

void printList(const list<int>& l) {
    for (list<int>::const_iterator it = l.begin(); it != l.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

/*
1¡¢empty
2¡¢size
3¡¢resize
*/

int main() {
    list<int> l;
    cout << "l.empty() = " << l.empty() << endl;
    cout << "l.size() = " << l.size() << endl;

    l.assign({ 1,2,3 });
    cout << "l.empty() = " << l.empty() << endl;
    cout << "l.size() = " << l.size() << endl;

    l.resize(18);
    cout << "l.empty() = " << l.empty() << endl;
    cout << "l.size() = " << l.size() << endl;
    printList(l);

    l.resize(20, 6);
    cout << "l.empty() = " << l.empty() << endl;
    cout << "l.size() = " << l.size() << endl;
    printList(l);

    l.resize(100000);
    l.resize(5);
    cout << "l.size() = " << l.size() << endl;
    printList(l);

    return 0;
}