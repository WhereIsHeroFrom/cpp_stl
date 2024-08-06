#include <iostream>
#include <queue>
using namespace std;

// q.pop()

int main() {
    queue<int> q;
    for (int i = 0; i < 5; ++i) {
        q.push(i);
    }
    // 0 1 2 3 4
    for (int i = 0; i < 5; ++i) {
        cout << "front = " << q.front() << ", back = " << q.back() << endl;
        q.pop();
    }

    return 0;
}