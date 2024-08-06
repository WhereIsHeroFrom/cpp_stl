#include <iostream>
#include <queue>
using namespace std;

// q.front()

int main() {
    queue<int> q;

    q.push(5);  cout << q.front() << endl;  // 5
    q.push(4);  cout << q.front() << endl;  // 5 4
    q.push(3);  cout << q.front() << endl;  // 5 4 3
    q.push(2);  cout << q.front() << endl;  // 5 4 3 2
    q.push(1);  cout << q.front() << endl;  // 5 4 3 2 1

    return 0;
}