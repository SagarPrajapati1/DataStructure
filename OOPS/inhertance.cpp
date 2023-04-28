#include <bits/stdc++.h>
using namespace std;
// if the base class is in private mode then no data member 
// or member function is not accessable

// if the class id in public mode then data member and member function is accessable outside the class 

class Human {

    private:
    int age;

    protected:
    int height;
    
    public:
    int weight;

    public:
    int getAge() {
        return this->age;
    }
    int setWeight(int w) {
        return this->weight = w;
    }

};

class Male: private Human {

    public:
    string color;

    void sleep() {
        cout << "Male is sleeping " << endl;
    }

    
    int getHeight() {
        return this->height;
    }

    int getHeight() {
        return this->height;
    }

};

int main()
{
    Male m1;



    //cout << m1.height() << endl;

    cout << m1.getHeight() << endl;
    
    /* cout << obj1.age << endl;
    obj1.setWeight(70);
    cout << obj1.weight << endl;
    cout << obj1.height << endl;
    cout << obj1.color << endl;
    obj1.sleep();
     */
    return 0;
}