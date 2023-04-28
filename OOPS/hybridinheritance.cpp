#include <bits/stdc++.h>
using namespace std;

class A{
    public:
    void f1() {
        cout << "f1" << endl; 
    }
};


class D {
    public:
    void d1() {
        cout << "d1" << endl;
    }
};
class B: public A {

    public:
    void f2() {
        cout << "f2" << endl;
    }
};

class C :public D, public B {
    public:
    void f3() {
        cout << "f3" << endl;
    }
};

int main()
{

A a;
a.f1();

B b;
b.f1();
b.f2();

C c;
c.f1();
c.f2();
c.f3();
c.d1();
return 0;
}