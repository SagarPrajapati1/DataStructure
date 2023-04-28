#include<iostream>
using namespace std;

int i = 10;

void a(int i) {
    cout << i << endl;
    cout << a << endl;
}
void b() {
    cout << i << endl;

}

int main() {
    cout << i << endl;
    int i = 1;
    a(i);
    b();
    
    return 0;
}