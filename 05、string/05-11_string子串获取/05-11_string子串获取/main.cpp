#include <iostream>
using namespace std;

int main() {
    string s1;
    s1 = "Hello woooorld";
    string subStr = s1.substr(7, 4);
    cout << subStr << endl;

    string s2 = "英雄哪里出来&&夜深人静写算法";
    int pos = s2.find("&&");
    string s3 = s2.substr(0, pos);
    string s4 = s2.substr(pos + 2);
    cout << s3 << ' ' << s4 << endl;


    return 0;
}