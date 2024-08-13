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
    map<int, int> m;

    // 1
    m.insert(pair<int, int>(1, 10));
    printMap(m);

    // 2
    m.insert(make_pair(3, 20));
    printMap(m);

    // 3
    m.insert(map<int, int>::value_type(2, 78));
    printMap(m);

    // 4
    m[4] = 6;
    printMap(m);

    // 5
    pair< map<int,int>::iterator, bool > ret = m.insert(make_pair(3, 21));
    cout << "insert(3, 21) = " << ret.second << endl;
    printMap(m);

    // 6
    m[3] = 22;
    printMap(m);

    // 7
    m[0];
    printMap(m);

    return 0;
}