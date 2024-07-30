#include <iostream>

using namespace std;

int main() {

    // 1. compare
    string s1 = "aab";

    string t11 = "aab";
    int r11 = s1.compare(t11);
    cout << s1 << " compare " << t11 << " -> " << r11 << endl;

    string t12 = "aaa";
    int r12 = s1.compare(t12);
    cout << s1 << " compare " << t12 << " -> " << r12 << endl;

    string t13 = "aac";
    int r13 = s1.compare(t13);
    cout << s1 << " compare " << t13 << " -> " << r13 << endl;

    string t14 = "aaba";
    int r14 = s1.compare(t14);
    cout << s1 << " compare " << t14 << " -> " << r14 << endl;

    string t15 = "aa";
    int r15 = s1.compare(t15);
    cout << s1 << " compare " << t15 << " -> " << r15 << endl;

    // 2. < > == <= >= 
    cout << s1 << " == " << t11 << " -> " << (s1 == t11) << endl;
    cout << s1 << " != " << t11 << " -> " << (s1 != t11) << endl;
    cout << s1 << " < " << t12 << " -> " << (s1 < t12) << endl;

    return 0;
}