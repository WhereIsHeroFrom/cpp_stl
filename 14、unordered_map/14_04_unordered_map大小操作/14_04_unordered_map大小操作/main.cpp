#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, int> m;
    cout << "m.empty() = " << m.empty() << endl;
    cout << "m.size()  = " << m.size() << endl;

    m = { pair<int, int>(52, 0), pair<int, int>(13, 14) };
    cout << "m.empty() = " << m.empty() << endl;
    cout << "m.size()  = " << m.size() << endl;

    return 0;
}