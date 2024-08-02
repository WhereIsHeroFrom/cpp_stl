#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d = { 9,8,7,6,5 };

    cout << d[2] << endl;
    cout << d.at(2) << endl;

    cout << d.front() << endl;
    cout << d.back() << endl;


    return 0;
}