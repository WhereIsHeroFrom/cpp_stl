#include <iostream>
#include <list>
using namespace std;

void printList(const list<int>& l) {
    for (list<int>::const_iterator it = l.begin(); it != l.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    // 1. Ĭ�Ϲ��캯��
    list<int> l1;
    cout << "l1:";
    printList(l1);

    // 2. ��ʼ���б�
    list<int> l2_1 = { 9,8,7,6,5 };
    cout << "l2_1: ";
    printList(l2_1);

    list<int> l2_2({ 9, 8, 7, 1, 5 });
    cout << "l2_2: ";
    printList(l2_2);

    // 3. ������
    list <int> l3(l2_1.begin(), l2_1.end());
    cout << "l3: ";
    printList(l3);

    // 4. ȫ0��ʼ��
    list<int> l4(8);
    cout << "l4: ";
    printList(l4);

    // 5. list<int> ������(a, b) �������� a ���ռ��Ԫ�أ�ÿ��Ԫ�س�ʼ��Ϊ b
    list <int> l5(8, 6);
    cout << "l5: ";
    printList(l5);

    // 6. �������캯��
    list<int> l6(l2_2);
    cout << "l6: ";
    printList(l6);

    return 0;
}