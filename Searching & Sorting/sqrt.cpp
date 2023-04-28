#include<bits/stdc++.h>
using namespace std;

long long int sqrt( int key) {

    int s = 0;
    int e = key;
    long long int mid = s + (e-s)/2;
    long long int  ans = -1;
    while (s <= e) {

        long long int square = mid*mid;

        
        if (square == key) {
            return mid;
        }

        else if (square > key){
            e = mid - 1;
        }

        else if(square < key) {
            ans = mid;
            s = mid + 1;
        }
        
        mid = s + (e-s)/2;
    }

    return ans;
} 

double morePrecision (int key, int precision, int tempsol) {
    double factor = 1;

    double ans = tempsol;
    for  (int i = 0; i < precision; i++) {
        factor = factor/10;
        for (double j = ans; j*j <key; j = j+factor) {
            ans = j;
        }
    
    }
    return ans;
}
int main()
{

int k;
cout << "Enter the k " ;
cin >> k;

int tempsol = sqrt(k);
cout << "ans is " << morePrecision(k, 3, tempsol);

return 0;
}