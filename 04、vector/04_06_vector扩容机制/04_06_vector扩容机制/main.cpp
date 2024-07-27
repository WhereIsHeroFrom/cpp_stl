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
ÈÝÁ¿£ºcapacity()
´óÐ¡£ºsize()
*/

int main() {
    vector<int> v1 = { 9,8,7,6 };
    printVector(v1);

    cout << "v1.size() = " << v1.size() << endl;
    cout << "v1.capacity() = " << v1.capacity() << endl;

    v1.push_back(3);
    cout << "v1.size() = " << v1.size() << endl;
    cout << "v1.capacity() = " << v1.capacity() << endl;

    v1.push_back(1);
    cout << "v1.size() = " << v1.size() << endl;
    cout << "v1.capacity() = " << v1.capacity() << endl;

    v1.push_back(2);
    cout << "v1.size() = " << v1.size() << endl;
    cout << "v1.capacity() = " << v1.capacity() << endl;
    // 9 * 1.5 = 13.5
    for (int i = 0; i < 3; ++i) {
        v1.push_back(i);
    }
    cout << "v1.size() = " << v1.size() << endl;
    cout << "v1.capacity() = " << v1.capacity() << endl;

    v1.resize(18);
    cout << "v1.size() = " << v1.size() << endl;
    cout << "v1.capacity() = " << v1.capacity() << endl;
    printVector(v1);
    
    v1.resize(20, 6);
    cout << "v1.size() = " << v1.size() << endl;
    cout << "v1.capacity() = " << v1.capacity() << endl;
    printVector(v1);

    v1.resize(100);
    cout << "v1.size() = " << v1.size() << endl;
    cout << "v1.capacity() = " << v1.capacity() << endl;
    printVector(v1);

    v1.resize(5);
    cout << "v1.size() = " << v1.size() << endl;
    cout << "v1.capacity() = " << v1.capacity() << endl;
    printVector(v1);


    return 0;
}