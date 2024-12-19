#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>& v) {
    for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v = { 9,8,7,6,5 };
    cout << v[2] << endl;
    cout << v.at(2) << endl;

    //cout << v[12] << endl;      产生未定义行为
    //cout << v.at(12) << endl;   会产生异常

    cout << "front: " << v.front() << endl;
    cout << "back: " << v.back() << endl;
    return 0;
}