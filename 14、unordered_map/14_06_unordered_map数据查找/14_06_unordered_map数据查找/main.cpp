#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, int> m;
    m[1] = 1;
    m[2] = 3;
    m[3] = 6;
    //m[4] = 0;
    m[666] = 886;

    for (int i = 0; i <= 4; ++i) {
        unordered_map<int, int>::iterator it = m.find(i);
        if (it != m.end()) {
            cout << "�ҵ���ֵ�ԣ�(" << it->first << "," << it->second << ")" << endl;
        }
        else {
            cout << "δ�ҵ�����" << i << endl;
        }
    }
    //cout << m[3] << endl;
    //cout << m[5] << endl;

    return 0;
}