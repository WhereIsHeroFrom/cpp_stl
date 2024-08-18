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
    s.insert(CGaGa("C++算法零基础", 5));
    s.insert(CGaGa("C++面向对象", 2));
    s.insert(CGaGa("C++零基础语法", 1));
    s.insert(CGaGa("C++数据结构", 3));
    s.insert(CGaGa("C++STL", 4));
    s.insert(CGaGa("C++项目实战(贪食蛇、扫雷、3D赛车)", 6));

    for (set< CGaGa >::iterator it = s.begin(); it != s.end(); it++) {
        (*it).print();
    }

    return 0;
}