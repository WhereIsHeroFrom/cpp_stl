#include <iostream>
#include <deque>

using namespace std;

void printDeque(deque<int>& d) {
    for (deque<int>::iterator iter = d.begin(); iter != d.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;
}

/*
1、pop_front
2、pop_back
3、erase、clear
*/

int main() {
    deque<int> d = {-1,9,8,5,2,1,1,-1};
    printDeque(d);
    d.pop_back();
    printDeque(d);
    d.pop_front();
    printDeque(d);

    deque<int>::iterator it = d.erase(d.begin() + 2);
    // 9 8 2 1 1
    printDeque(d);
    cout << *it << endl;
    it = d.erase(it);
    // 9 8 1 1
    printDeque(d);
    cout << *it << endl;

    d.erase(d.begin() + 1, d.begin() + 3);
    printDeque(d);

    d.clear();
    printDeque(d);

    cout << "d.empty() = " << d.empty() << endl;
    cout << "d.size()  = " << d.size() << endl;

    return 0;
}