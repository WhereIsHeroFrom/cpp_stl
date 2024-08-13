#include <iostream>
#include <queue>

using namespace std;

int main() {
    // 1、最大优先队列
    priority_queue<int, vector<int>, less<int> > q1;
    q1.push(6); cout << q1.top() << endl;
    q1.push(3); cout << q1.top() << endl;
    q1.push(9); cout << q1.top() << endl;
    q1.push(1); cout << q1.top() << endl;
    q1.push(12); cout << q1.top() << endl;
    q1.push(17); cout << q1.top() << endl;
    q1.push(0); cout << q1.top() << endl;

    cout << "---------------------------" << endl;

    // 2、最小优先队列
    priority_queue<int, vector<int>, greater<int> > q2;
    q2.push(6); cout << q2.top() << endl;
    q2.push(3); cout << q2.top() << endl;
    q2.push(9); cout << q2.top() << endl;
    q2.push(1); cout << q2.top() << endl;
    q2.push(12); cout << q2.top() << endl;
    q2.push(17); cout << q2.top() << endl;
    q2.push(0); cout << q2.top() << endl;

    return 0;
}