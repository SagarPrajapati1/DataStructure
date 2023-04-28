#include <bits/stdc++.h>
using namespace std;

class Student{

    private:
    string name;
    int age;
    int height;

    public:
    string getName() {
        return this->name;
    }
    int getAge() {
        return this->age;
    }
    int getHeight() {
        return this->height;
    }

    void setName(string n) {
        this->name = n;
    }

    void setAge(int a) {
        this->age = a;
    }
    void setHeight (int h) {
        this->height = h;
    }
};

int main()
{

    Student s;
    cout << "Everythig is fine" << endl;

    return 0;
}