#include <iostream>
using namespace std;

// strcat

int main() {
    // 1. +
    string s1 = "英雄";
    string t1 = "出来";
    s1 = s1 + "哪里";        // const char*
    // cout << s1 << endl;
    s1 = s1 + t1;            // const string&
    // cout << s1 << endl;
    s1 = s1 + ';';           // char
    cout << s1 << endl;

    // 2. +=
    string s2 = "夜深";
    string t2 = "写算法";
    s2 += "人静";        // const char*
    // cout << s2 << endl;
    s2 += t2;            // const string&
    // cout << s2 << endl;
    s2 += ';';           // char
    cout << s2 << endl;

    // 3. append
    string s3 = "英雄";
    string t3 = "联盟";
    s3.append("算法");
    s3.append(t3);
    s3.append("5201314", 3);     // 3 代表个数
    // cout << s3 << endl;
    s3.append("5201314", 3, 4);  // 3 代表位置
    cout << s3 << endl;

    // 4. push_back
    string s4 = "英雄编程";
    s4.push_back('6');
    s4.push_back('6');
    s4.push_back('6');
    s4.push_back(';');
    cout << s4 << endl;

    return 0;
}