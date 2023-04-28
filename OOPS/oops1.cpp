#include<bits//stdc++.h>
using namespace std;

class Hero
{

private:
    int health;

public:
    char *Name;
    char level;
    
    Hero() {
        cout << "Simple constructor is Called";
        Name = new char[100];
    }

    Hero(Hero& temp) {
        char *ch = new char[strlen(temp.Name) + 1];
        strcpy(ch, temp.Name);
        this->Name = ch;

        // this->health = temp.health;
        // this->level = temp.level;
    }

    void set_values(char name[], int h, int l ) {
        this->Name = name;
        this->health = h;
        this->level = l;

    }

    void show_values () {
        cout << endl;
        cout << "Name : " << Name << " , ";
        cout << "Health : " << health << " , ";
        cout << "Level : " << level << endl;
    }
};

int main()
{
    Hero h1;
    char name[7] = "babbar";
    h1.set_values(name, 70, 'D');
    h1.show_values();

    // use default copy constructor
    Hero h2(h1);
    // Hero h2 = h1;
    h2.show_values();

    h1.Name[0] = 'g';
    h1.show_values();


    h2.Name[0] = 'd';
    h2.show_values();
}