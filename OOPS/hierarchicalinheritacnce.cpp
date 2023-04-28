#include <bits/stdc++.h>
using namespace std;

class A {

    public:
    void f1() {
        cout << "Inside function 1 " << endl;

    }
};

class B: public A {
    public:
    void f2() {
        cout << "Inside function 2" << endl << endl;
    }
};


class C: public A {

    public:
    void f3() {
        cout << "Inside function 3" << endl;
    }

};

int main()
{

B b1;
b1.f1();
b1.f2();
C c1;
c1.f1();

c1.f3();

return 0;
}