#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a[6] = { 9,8,7,6,5,4 };
    vector<int> v = { 2, 0, 2, 4 };
    cout << v.capacity() << endl;
    v.push_back(7);
    cout << v.capacity() << endl;

    cout << "begin: ->" << *v.begin() << endl;
    cout << "end: ->" << *(v.end()-1) << endl;

    cout << "front:" << v.front() << endl;
    cout << "back:" << v.back() << endl;

    return 0;
}