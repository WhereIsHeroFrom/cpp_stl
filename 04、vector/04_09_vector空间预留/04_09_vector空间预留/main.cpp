#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    v.reserve(100);
    for (int i = 0; i < 100; ++i) {
        cout << "size = " << v.size() << ", " << "capacity = " << v.capacity() << endl;
        v.push_back(i);
    }
    // reserve   �޸ĵ��� capacity
    // resize    �޸ĵ��� size
    return 0;
}
