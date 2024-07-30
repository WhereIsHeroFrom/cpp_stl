#include <iostream>
using namespace std;

int main() {
    string s1;

    // 1
    s1 = "Hello woooorld";
    s1.erase();
    cout << s1 << endl;

    // 2
    s1 = "Hello woooorld";
    s1.erase(7);
    cout << s1 << endl;
    
    // 3
    s1 = "Hello woooorld";
    s1.erase(7, 3);
    cout << s1 << endl;

    // 4
    s1 = "Hello woooorld";
    s1.erase(s1.begin());
    cout << s1 << endl;

    // 5
    s1 = "Hello woooorld";
    s1.erase(s1.begin()+7, s1.begin()+10);
    cout << s1 << endl;

    // s1.erase()

    return 0;
}