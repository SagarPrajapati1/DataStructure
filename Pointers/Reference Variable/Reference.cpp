#include<iostream>
using namespace std;

int update(int n) {
    n++;
    return n;
}

void update1(int n) { // Pass by value -->> New memory created 
    n++;
}
void update2(int& n) { // Pass by referencing --> No new memory created
    n++;
}

int& func(int n) {
    int a = n;
    int& ans = a;
    return ans;
}

int main() {

    int i = 5;
    int j = update(i); // change --> bcoz returning the value
    cout << j << endl;

    update1(i); // No change -->> bcoz  no return 
    cout << endl << i; 

    update2(i); // Referencing 
    cout << endl << i << endl;
    //  cout << func(5) << endl;
    return 0;

}