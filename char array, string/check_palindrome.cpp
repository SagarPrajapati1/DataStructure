#include<iostream>
using namespace std;
char toLowerCase(char);
int get_length(char name[])
{   
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++) {
        count++;
    }
    return count;

}
char toLowerCase(char ch) {
    if ((ch >= 'a' && ch <= 'z' ) || (ch >= '0' && ch <= '9')){
        return ch;
    }
    else {
        return ch - 'A' + 'a';
    }
}

bool check_palindrome(char name[], int n) {
    int s = 0; int e = n-1;
    while (s <= e) {
        if(toLowerCase(name[s]) != toLowerCase(name[e])) {
            return 0;
        }

        else 
        {
            s++;
            e--;
        }
    }
    return 1;
}

/*
bool check_palindrome(char name[], int n ) {
    int s = 0;
    int e = n-1;
    while (s<=e){
        if(name[s++] == name[e--]) {
            continue;
        }
        else return 0;
    }
    return 1;
} */


int main() {

    char ch[10];
    cout << "Enter string  " ;
    cin >> ch;
    int len = get_length(ch); 
    cout << "Palindrome or Not  " << check_palindrome(ch, len) << endl;


    return 0;
}