#include <iostream>
#include <map>
using namespace std;

void printMap(const map<int, int>& m) {
    for (map<int, int>::const_iterator it = m.begin(); it != m.end(); it++) {
        // it->first,  it->second
        cout << "key = " << it->first << " " << " value = " << it->second << endl;
    }
    cout << "----------------------------" << endl;
}

int main() {
    map<int, int> m1;
    cout << "m1.empty() = " << m1.empty() << endl;
    cout << "m1.size()  = " << m1.size() << endl;

    map<int, int> m2 = { pair<int, int>(1, 10),pair<int, int>(3, 5),pair<int, int>(4, 8) };
    cout << "m2.empty() = " << m2.empty() << endl;
    cout << "m2.size()  = " << m2.size() << endl;

    return 0;
}