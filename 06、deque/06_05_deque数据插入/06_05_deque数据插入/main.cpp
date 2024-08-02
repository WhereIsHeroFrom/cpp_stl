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
1、push_front
2、push_back
3、insert
*/

int main() {

    deque<int> d;

    // 1、push_front
    d.push_front(-1);
    d.push_front(-2);
    d.push_front(-3);
    // -3 -2 -1
    printDeque(d);

    // 2、push_back
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    // -3 -2 -1 1 2 3
    printDeque(d);

    // 3、insert
    d.insert(d.begin() + 3, 0);
    // -3 -2 -1 0 1 2 3
    printDeque(d);
    d.insert(d.end() - 1, 5, 8);
    // -3 -2 -1 0 1 2 8 8 8 8 8 3 
    printDeque(d);

    d.insert(d.begin() + 1, d.begin() + 4, d.begin() + 6);
    // -3 1 2 -2 -1 0 1 2 8 8 8 8 8 3 
    printDeque(d);

    return 0;
}