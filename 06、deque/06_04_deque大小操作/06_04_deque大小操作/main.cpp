#include <iostream>
#include <deque>

using namespace std;

void printDeque(deque<int>& d) {
    /*for (deque<int>::iterator iter = d.begin(); iter != d.end(); iter++) {
        cout << *iter << " ";
    }*/
    for (int i = 0; i < d.size(); ++i) {
        cout << d[i] << " ";
    }
    cout << endl;
}

/*
1¡¢empty
2¡¢size
3¡¢resize
*/

int main() {
    deque<int> d;

    cout << "d.empty() = " << d.empty() << endl;
    cout << " d.size() = " << d.size() << endl;

    d.assign({ 1,2,3 });
    cout << "d.empty() = " << d.empty() << endl;
    cout << " d.size() = " << d.size() << endl;
    printDeque(d);

    d.resize(18);
    cout << " d.size() = " << d.size() << endl;
    printDeque(d);

    d.resize(20, 6);
    cout << " d.size() = " << d.size() << endl;
    printDeque(d);

    d.resize(10000);
    d.resize(5);
    cout << " d.size() = " << d.size() << endl;
    printDeque(d);

    return 0;
}
