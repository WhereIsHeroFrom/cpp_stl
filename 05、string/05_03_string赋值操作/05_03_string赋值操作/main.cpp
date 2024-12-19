#include <iostream>
using namespace std;

int main() {
    // 1. 字符串常量的赋值
    string s1;
    s1 = "英雄哪里出来";
    cout << s1 << endl;

    // 2.字符串变量的赋值
    string s2;
    s2 = s1;
    cout << s2 << endl;

    // 3. 字符常量赋值
    string s3;
    s3 = 'x';
    cout << s3 << endl;

    // 4. assign v1
    string s4;
    s4.assign("英雄算法联盟");
    cout << s4 << endl;

    // 5. assign v2
    string s5;
    s5.assign("英雄算法联盟", 8);
    cout << s5 << endl;

    // 6. assign v3
    string s6;
    s6.assign(s5);
    cout << s6 << endl;

    // 7. a个b
    string s7;
    s7.assign(8, '6');
    cout << s7 << endl;


    return 0;
}