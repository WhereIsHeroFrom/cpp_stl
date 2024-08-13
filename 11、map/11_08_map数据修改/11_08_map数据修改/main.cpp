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
    m.insert(make_pair(1, 20));
    m.insert(make_pair(2, 330));
    m.insert(make_pair(3, 4440));

    m[3] = 888;
    printMap(m);

    m[2]++;
    printMap(m);

    m[1] -= 21;
    printMap(m);

    return 0;
}