#include <iostream>
#include <vector>
using namespace std;

void remove1(vector<int>& v, int index) {
    v.erase(v.begin() + index);
}

void remove2(vector<int>& v, int index) {
    swap(v[index], v.back());
    v.pop_back();
}

void printVector(const vector<int>& v) {
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v;
    cout << "remove1 : ";
    for (int i = 0; i < 150006; ++i) {
        v.push_back(i);
    }
    for (int i = 0; i < 150000; ++i) {
        remove1(v, 4);
    }
    cout << "½áÊø" << endl;
    cout << "remove2 : ";
    // printVector(v);
    for (int i = 0; i < 150006; ++i) {
        v.push_back(i);
    }
    for (int i = 0; i < 150000; ++i) {
        remove2(v, 4);
    }
    cout << "½áÊø" << endl;
    
    return 0;
}