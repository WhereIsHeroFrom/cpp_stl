#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>& v) {
    for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v = { 9,8,5,2,1,1 };
    cout << "v:";
    printVector(v);

    // 1. = 赋值
    vector<int> v1 = v;
    cout << "v1:";
    printVector(v1);

    // 2. assign(迭代器)
    vector<int> v2;
    v2.assign(v1.begin(), v1.end());
    cout << "v2:";
    printVector(v2);

    // 3. 初始化列表
    vector<int> v3;
    v3.assign({ 1,2,3,4,5,6 });
    cout << "v3:";
    printVector(v3);

    // 4. 初始化 a 个 b
    vector<int> v4;
    v4.assign(8, 6);
    cout << "v4:";
    printVector(v4);

    return 0;
}