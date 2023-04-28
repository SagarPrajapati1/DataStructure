#include<iostream>
#include<string>
using namespace std;

void print(string s[], int n) {

    if (n == 0) return;

    int digit = n % 10;
    n = n / 10;
    
    print(s, n);
    cout << s[digit] << " ";

}

int main() {

    int n;
    cout << "Enter n : ";
    cin >> n;

    string s[11] = {"Zero","One", "Two", "Three",
                        "Four", "Five", "Six", 
                        "Seven", "Eight", "Nine", "Ten"};
    print(s, n);


    cout << endl;

    return 0;
}