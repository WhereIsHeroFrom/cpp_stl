#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printVector(const vector<int>& v) {
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
}

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    vector<int> v = { 9,8,7,1,2,3,4 };
    sort(v.begin(), v.end(), cmp);
    printVector(v);


    return 0;
}