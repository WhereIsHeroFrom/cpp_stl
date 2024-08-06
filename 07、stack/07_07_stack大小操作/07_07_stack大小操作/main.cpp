#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack <int> stk;
    for (int i = 0; i < 5; ++i) {
        cout << "stk.empty() = " << stk.empty() << "," << "stk.size() = " << stk.size() << endl;
        stk.push(i);
    }
    for (int i = 0; i < 5; ++i) {
        stk.pop();
        cout << "stk.empty() = " << stk.empty() << "," << "stk.size() = " << stk.size() << endl;
    }
    return 0;
}