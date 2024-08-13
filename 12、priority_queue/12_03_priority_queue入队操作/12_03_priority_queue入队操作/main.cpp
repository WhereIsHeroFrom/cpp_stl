#include <iostream>
#include <queue>

using namespace std;

int main() {
    // 1、最大优先队列
    priority_queue<int, vector<int>, less<int> > q1;
    q1.push(6);
    q1.push(3);
    q1.push(9);
    q1.push(1);
    q1.push(12);
    q1.push(17);
    q1.push(0);

    // 2、最小优先队列
    priority_queue<int, vector<int>, greater<int> > q2;
    q2.push(6);
    q2.push(3);
    q2.push(9);
    q2.push(1);
    q2.push(12);
    q2.push(17);
    q2.push(0);

    return 0;
}