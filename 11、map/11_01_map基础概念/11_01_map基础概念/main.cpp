#include <iostream>
#include <map>
#include <set>
using namespace std;

int main() {
    pair<int, int> p1;
    p1.first = 13;
    p1.second = 14;
    cout << p1.first << p1.second << endl;

    pair<int, string> p2(2, "333");
    cout << p2.first << p2.second << endl;

    pair<char, int> p3 = make_pair(52, 0); // '0' -> 48,   '1' -> 49 ... '4' -> 52
    cout << p3.first << p3.second << endl;

    map<int, int> m;
    set<int> s;

    return 0;
}