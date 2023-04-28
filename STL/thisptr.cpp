#include<iostream>
using namespace std;
class complex {

    public :
    int id;
    string name;
    float salary;

    complex(int id, string name, float salary) {

        this->id = id;
        this->name = name;
        this->salary = salary;
    }
    void display() {
        cout<< id <<" " << name << " " << salary << endl;
    }

};

int main () {

    complex c1 = complex(101, "sagar", 20000);
    complex c2 = complex(102, "Google", 200000);
    c1.display();
    c2.display();
    return 0;
}