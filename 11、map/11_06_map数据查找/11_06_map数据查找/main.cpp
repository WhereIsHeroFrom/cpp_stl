#include <iostream>
#include <map>
using namespace std;

void printMap(const map<int, int>& m) {
    for (map<int, int>::const_iterator it = m.begin(); it != m.end(); it++) {
        // it->first,  it->second
        cout << "key = " << it->first << " " << " value = " << it->second << endl;
    }
    cout << "----------------------------" << endl;
}

int main() {
    map<int, int> m = {
        pair<int, int>(1, 4),
        pair<int, int>(3, 20),
        pair<int, int>(2, 80),
        pair<int, int>(4, 17),
    };

    for (int i = 4; i <= 5; ++i) {
        map<int, int>::iterator it = m.find(i);
        if (it != m.end()) {
            cout << "�ҵ���ֵ�ԣ���" << it->first << "," << it->second << "��" << endl;
        }
        else {
            cout << "δ�ҵ�����" << i << endl;
        }
    }


    return 0;
}