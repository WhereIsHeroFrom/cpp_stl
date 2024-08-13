#include <iostream>
#include <queue>

using namespace std;

struct type {
    int key;
    int value;
    type() { key = value = 0; }
    type(int k, int v) : key(k), value(v) {}

    bool operator<(const type& t) const {
        return key > t.key;
    }
};

int main() {
    priority_queue<type> q;
    q.push(type(6, 1));
    q.push(type(3, 2));
    q.push(type(9, 0));
    q.push(type(1, 8));
    q.push(type(12, 4));
    q.push(type(17, 2));
    q.push(type(0, 21));
    q.push(type(99, 6));

    while (!q.empty()) {
        cout << "top() = " << q.top().key << ", size() = " << q.size() << endl;
        q.pop();
    }
    
    return 0;
}
