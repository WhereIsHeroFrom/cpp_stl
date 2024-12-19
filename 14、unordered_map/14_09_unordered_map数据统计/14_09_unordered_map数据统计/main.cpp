#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, int> m = {
        pair<int, int>(1, 4),
        pair<int, int>(3, 33),
        pair<int, int>(2, 88),
        pair<int, int>(2, 77),
        pair<int, int>(5, 666),
    };
    for (int i = -1; i < 3; ++i) {
        cout << i << "的出现次数是" << m.count(i) << endl; // has
    }
    unordered_multimap<int, int> mm = {
        pair<int, int>(1, 4),
        pair<int, int>(1, 4),
        pair<int, int>(1, 4),
        pair<int, int>(1, 3),
        pair<int, int>(3, 33),
        pair<int, int>(2, 88),
        pair<int, int>(2, 77),
        pair<int, int>(5, 666),
    };
    for (int i = -1; i < 3; ++i) {
        cout << i << "的出现次数是" << mm.count(i) << endl;
    }


    return 0;
}