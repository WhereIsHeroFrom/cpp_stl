#include <iostream>
#include <stack>
using namespace std;

int main() {
    // 1. 默认构造函数
    stack<int> stk1;

    // 2. 拷贝构造函数
    stack<int> stk2(stk1);

    return 0;
}