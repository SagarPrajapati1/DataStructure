#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};

class Dog : public Animal
{
public:
    // funtion overriding can be done by changing the definition of the function

    void speak()
    {
        cout << "Barking" << endl;
    }
};

int main()
{

    Dog obj;
    // it will call the Dog class's function because this func is present inside that class
    // if this function is not present in the Dog class then it will the Animal class's function

    obj.speak();

    return 0;
}