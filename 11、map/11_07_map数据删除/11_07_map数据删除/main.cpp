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
    map<int, int> m = {
        pair<int, int>(1, 4),
        pair<int, int>(3, 30),
        pair<int, int>(2, 80),
        pair<int, int>(4, 90),
    };
    printMap(m);
    
    m.erase(1);
    printMap(m);

    m.erase(m.begin());
    printMap(m);

    m.erase(m.begin(), m.end());
    printMap(m);

    m = {
        pair<int, int>(1, 4),
        pair<int, int>(3, 30),
        pair<int, int>(2, 80),
        pair<int, int>(4, 90),
    };
    m.clear();
    printMap(m);

    return 0;
}

