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
    // 1.默认构造函数
    vector<int> v1;
    cout << "v1:";
    printVector(v1);

    // 2.初始化列表
    // int a[5] = {9,8,7,6,5};
    vector<int> v2_1 = { 9,8,7,6,5 };
    cout << "v2_1:";
    printVector(v2_1);
    vector<int> v2_2({ 9,6,6,8,5 });
    cout << "v2_2:";
    printVector(v2_2);

    // 3.迭代器
    vector<int> v3(v2_1.begin(), v2_1.end());
    cout << "v3:";
    printVector(v3);

    // 4.全0初始化
    vector<int> v4(8);
    cout << "v4:";
    printVector(v4);

    // 5. vector<int> 变量名(a, b); 申请a个空间的元素，每个元素的值初始化为 b
    vector<int> v5(8, 6);
    cout << "v5:";
    printVector(v5);

    // 6. 拷贝构造函数
    vector<int> v6(v2_2);
    cout << "v6:";
    printVector(v6);

    return 0;
}