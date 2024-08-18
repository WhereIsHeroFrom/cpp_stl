#include <iostream>
#include <set>
using namespace std;

class CGaGa {
public:
    CGaGa() {
        _name = "";
        _priority = -1;
    }
    CGaGa(string name, int pri) : _name(name), _priority(pri) {}

    bool operator<(const CGaGa& cgg) const {
        return _priority < cgg._priority;
    }
    void print() const {
        cout << "(" << _priority << ")" << _name << endl;
    }
private:
    string _name;
    int _priority;
};

int main() {
    set< CGaGa > s;
    s.insert(CGaGa("C++�㷨�����", 5));
    s.insert(CGaGa("C++�������", 2));
    s.insert(CGaGa("C++������﷨", 1));
    s.insert(CGaGa("C++���ݽṹ", 3));
    s.insert(CGaGa("C++STL", 4));
    s.insert(CGaGa("C++��Ŀʵս(̰ʳ�ߡ�ɨ�ס�3D����)", 6));

    for (set< CGaGa >::iterator it = s.begin(); it != s.end(); it++) {
        (*it).print();
    }

    return 0;
}