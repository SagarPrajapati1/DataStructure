#include <bits/stdc++.h>
using namespace std;

class A {

    public:
    void speak() {
        cout << "Speaking" << endl;
    }
};

class B {

    public:
    void bark() {
        cout << "Barking" << endl;
    }
};

class  C: public A, public B {
};

int main()
{

    C obj1;
    obj1.speak();
    obj1.bark();

    return 0;
}