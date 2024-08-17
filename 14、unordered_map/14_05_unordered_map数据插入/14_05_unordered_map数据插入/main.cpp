#include <iostream>
#include <unordered_map>
using namespace std;

void printUMap(const unordered_map<int, int>& m) {
    for (unordered_map<int, int>::const_iterator it = m.begin(); it != m.end(); it++) {
        cout << "key = " << it->first << " " << "value = " << it->second << endl;
    }
    cout << "--------------------------------" << endl;
}

int main() {
    unordered_map<int, int> m;

    // 1
    m.insert(pair<int, int>(1, 10));
    printUMap(m);

    // 2
    m.insert(make_pair(3, 20));
    printUMap(m);

    // 3
    m.insert(unordered_map<int, int> ::value_type(4, 7));
    printUMap(m);

    // 4
    m[88] = 6;
    printUMap(m);

    // 5
    pair< unordered_map<int, int>::iterator, bool> ret = m.insert(make_pair(4, 10));
    cout << "insert(4, 10) = " << ret.second << endl;

    // 6
    m[3] = 22;
    printUMap(m);

    // 7
    m[0];
    printUMap(m);


    return 0;
}