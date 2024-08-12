#include<iostream>
#include<set>
using namespace std;

void printSet(const set<int>& s) {
    for (set<int>::const_iterator it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    // 1.Ĭ�Ϲ��캯��
    set<int> s1;
    cout << "s1: ";
    printSet(s1);

    // 2. ��ʼ���б�
    set<int> s2_1 = { 9,8,7,6,5 };
    cout << "s2_1: ";
    printSet(s2_1);

    set<int> s2_2({ 9,8,7,7,6,5 });  // set��֧���ظ�Ԫ�ء�multiset֧���ظ�Ԫ��
    cout << "s2_2: ";
    printSet(s2_2);

    // 3. �������ķ�ʽ
    set<int> s3(s2_1.begin(), s2_1.end());
    cout << "s3: ";
    printSet(s3);

    // 4. ��������
    set<int> s4(s2_2);
    cout << "s4: ";
    printSet(s4);

    return 0;
}