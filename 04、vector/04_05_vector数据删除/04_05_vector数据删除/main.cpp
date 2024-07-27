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
1、pop_back
2、erase
3、clear
*/
int main() {
    vector<int> v = { 9,8,5,211 };
    printVector(v);

    // 1、pop_back
    v.pop_back();
    printVector(v);

    // 2、erase
    vector<int>::iterator it = v.erase(v.begin());
    printVector(v);
    cout << *it << endl;

    // 3、clear
    v.clear();
    printVector(v);

    return 0;
}