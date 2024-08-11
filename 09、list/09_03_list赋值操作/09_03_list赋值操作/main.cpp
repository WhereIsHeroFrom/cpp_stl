#include <iostream>
#include <list>
using namespace std;

void printList(const list<int>& l) {
    for (list<int>::const_iterator it = l.begin(); it != l.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    list<int> l = { 9,8,5,2,1,1 };
    cout << "l:";
    printList(l);

    // 1. = 赋值
    list<int> l1;
    l1 = l;
    cout << "l1:";
    printList(l1);

    // 2. assign(迭代器)
    list<int> l2;
    l2.assign(l1.begin(), l1.end());
    cout << "l2:";
    printList(l2);

    // 3. assign(初始化列表)
    list<int> l3;
    l3.assign({ 1,3,1,4 });
    cout << "l3:";
    printList(l3);

    // 4. assign(a, b) 初始化 a 个 b
    list<int> l4;
    l4.assign(8, 6);
    cout << "l4:";
    printList(l4);


    return 0;
}