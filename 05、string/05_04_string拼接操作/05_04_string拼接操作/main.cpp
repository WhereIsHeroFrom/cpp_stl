#include <iostream>
using namespace std;

// strcat

int main() {
    // 1. +
    string s1 = "Ӣ��";
    string t1 = "����";
    s1 = s1 + "����";        // const char*
    // cout << s1 << endl;
    s1 = s1 + t1;            // const string&
    // cout << s1 << endl;
    s1 = s1 + ';';           // char
    cout << s1 << endl;

    // 2. +=
    string s2 = "ҹ��";
    string t2 = "д�㷨";
    s2 += "�˾�";        // const char*
    // cout << s2 << endl;
    s2 += t2;            // const string&
    // cout << s2 << endl;
    s2 += ';';           // char
    cout << s2 << endl;

    // 3. append
    string s3 = "Ӣ��";
    string t3 = "����";
    s3.append("�㷨");
    s3.append(t3);
    s3.append("5201314", 3);     // 3 �������
    // cout << s3 << endl;
    s3.append("5201314", 3, 4);  // 3 ����λ��
    cout << s3 << endl;

    // 4. push_back
    string s4 = "Ӣ�۱��";
    s4.push_back('6');
    s4.push_back('6');
    s4.push_back('6');
    s4.push_back(';');
    cout << s4 << endl;

    return 0;
}