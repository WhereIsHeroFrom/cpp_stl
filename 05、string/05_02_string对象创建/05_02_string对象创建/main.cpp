#include <iostream>
using namespace std;

int main() {
    // 1. �޲ι���
    string s1;
    cout << s1 << endl;

    // 2. ��ʼ���б�
    string s2({ 'h', 'e', 'l','l', 'o' });
    cout << s2 << endl;
    
    // 3. �ַ�����ʼ��
    string s3("Ӣ���������");
    cout << s3 << endl;

    // 4. �ַ�����ǰn���ַ�
    string s4("Ӣ���������", 6);
    cout << s4 << endl;

    string s41("Ӣ���������", 5);
    cout << s41.size() << endl;
    cout << (int)s41[4] << endl;
    cout << s41 << endl;

    // 5. ��������
    string s5(s4);
    cout << s5 << endl;

    // 6. a �� �ַ� b
    string s6(8, 'o');
    cout << s6 << endl;


    return 0;
}