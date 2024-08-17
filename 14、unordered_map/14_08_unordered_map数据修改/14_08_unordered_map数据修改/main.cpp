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
    m.insert(make_pair(1, 20));
    m.insert(make_pair(2, 333));
    m.insert(make_pair(3, 6666));

    m[3] = 888;
    printUMap(m);

    m[2]++;
    printUMap(m);

    m[1] -= 21;
    printUMap(m);

    return 0;
}