#include <iostream>
using namespace std;

int main() {
    string  s1;

    // 1
    s1 = "Hello woooorld";
    cout << s1.find("oooo") << endl;

    // 2
    cout << (int)s1.find("oooo", 8) << endl;
    cout << s1.find("oooo", 5) << endl;

    // 3
    cout << s1.find('o') << endl;
    cout << s1.find('o', s1.find('o') + 1) << endl;

    // 4
    cout << s1.rfind("oo") << endl;


    return 0;
}