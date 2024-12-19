#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>& v) {
    for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;
}
/*
1¡¢push_back
2¡¢insert
*/

int main() {
    vector<int> v;
    for (int i = 0; i < 10; ++i) {
        v.push_back(i);
    }
    printVector(v);

    v.insert(v.begin(), 888);
    printVector(v);

    v.insert(v.begin()+1, 666);
    printVector(v);

    return 0;
}