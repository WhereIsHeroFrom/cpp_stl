#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<long long> d;

    for (int i = 0; i < 9; ++i) {
        d.push_back(i);
    }
    for (int i = 9; i < 18; ++i) {
        d.push_front(i);
    }
    return 0;
}
