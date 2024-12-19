#include<iostream>
#include<set>
using namespace std;

void printSet(const set<int>& s) {
    for (set<int>::const_iterator it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    // 1.默认构造函数
    set<int> s1;
    cout << "s1: ";
    printSet(s1);

    // 2. 初始化列表
    set<int> s2_1 = { 9,8,7,6,5 };
    cout << "s2_1: ";
    printSet(s2_1);

    set<int> s2_2({ 9,8,7,7,6,5 });  // set不支持重复元素、multiset支持重复元素
    cout << "s2_2: ";
    printSet(s2_2);

    // 3. 迭代器的方式
    set<int> s3(s2_1.begin(), s2_1.end());
    cout << "s3: ";
    printSet(s3);

    // 4. 拷贝构造
    set<int> s4(s2_2);
    cout << "s4: ";
    printSet(s4);

    return 0;
}