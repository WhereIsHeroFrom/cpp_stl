#include <iostream>
using namespace std;

int main() {
    string s;

    // 1
    s = "Hello woooorld";
    s.replace(7, 5, "or");
    cout << s << endl;

    // 2
    s = "Hello woooorld";
    s.replace(s.begin() + 7, s.begin() + 12, "or");
    cout << s << endl;

    // 3
    s = "Hello woooorld";
    s.replace(s.begin() + 7, s.begin() + 12, "oranddjkfgjdfigjkdfgdfj", 2);
    cout << s << endl;

    return 0;
}