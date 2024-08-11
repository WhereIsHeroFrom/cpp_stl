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
1、pop_front
2、pop_back
3、erase、clear
*/

int main() {
    list<int> l = { -1, 9,8,5,2,1,1,-1 };
    printList(l);
    l.pop_back();
    printList(l);
    l.pop_front();
    printList(l);                                 // 9 8 5 2 1 1

    list<int>::iterator it = l.erase(l.begin());  // 8 5 2 1 1
    printList(l);
    cout << *it << endl;
    it = l.erase(it);
    printList(l);                                 // 5 2 1 1
    cout << *it << endl;

    it++;
    it++;
    l.erase(it, l.end());                         // 5 2
    printList(l);

    l.clear();
    printList(l);
    cout << "l.size() = " << l.size() << endl;



    return 0;
}