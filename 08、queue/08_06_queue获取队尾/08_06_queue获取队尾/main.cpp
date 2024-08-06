#include <iostream>
#include <queue>
using namespace std;

// q.back()

int main() {
    queue<int> q;

    for (int i = 0; i < 5; ++i) {
        q.push(i);   // 0 1 2 3 4
        cout << "push " << i << ", back = " << q.back() << endl;
    }

    return 0;
}