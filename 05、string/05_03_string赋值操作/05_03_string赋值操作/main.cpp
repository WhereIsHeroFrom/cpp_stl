#include <iostream>
using namespace std;

int main() {
    // 1. �ַ��������ĸ�ֵ
    string s1;
    s1 = "Ӣ���������";
    cout << s1 << endl;

    // 2.�ַ��������ĸ�ֵ
    string s2;
    s2 = s1;
    cout << s2 << endl;

    // 3. �ַ�������ֵ
    string s3;
    s3 = 'x';
    cout << s3 << endl;

    // 4. assign v1
    string s4;
    s4.assign("Ӣ���㷨����");
    cout << s4 << endl;

    // 5. assign v2
    string s5;
    s5.assign("Ӣ���㷨����", 8);
    cout << s5 << endl;

    // 6. assign v3
    string s6;
    s6.assign(s5);
    cout << s6 << endl;

    // 7. a��b
    string s7;
    s7.assign(8, '6');
    cout << s7 << endl;


    return 0;
}