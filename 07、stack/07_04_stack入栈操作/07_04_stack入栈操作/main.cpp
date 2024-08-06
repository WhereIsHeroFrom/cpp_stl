#include <iostream>
#include <stack>
using namespace std;

int main() {

    stack<int> stk;

    stk.push(5);     // 5
    stk.push(4);     // 5 4
    stk.push(3);     // 5 4 3
    stk.push(2);     // 5 4 3 2
    stk.push(1);     // 5 4 3 2 1

    return 0;
}