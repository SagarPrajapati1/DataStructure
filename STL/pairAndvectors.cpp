#include <bits/stdc++.h>
using namespace std;
void printVector(vector<string> &v ) { // same vector not a copy 
        cout << "size: " << v.size() << endl;
        for(int i = 0; i < v.size(); i++) { 
            // v.size() --> O(1);
            cout << v[i] << " ";
        }
        cout << endl;
    }
int main() {
    vector<string> v; // string vector
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        v.push_back(s);
    }    
    printVector(v);
    return 0;
}

/*

int main() {

    
    // declaring a vector
    vector<int> v(5, 2); // initialize by default 0
    vector<double> v1;
    vector <int> v(5,3); // size is 5 nd intialize with 3
    int n ;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
        //v.emplace_back(x);
    }
    v.pop_back(); //O(1)
    v.emplace_back(7);
    vector<int> v2 = v; // O(n)
    v2.emplace_back(6);
    printVector(v2);




return 0;
} */
/*
{   // pair<data type, data type> name; <- declaration
    pair<int, string> p;
    
    p = make_pair(2, "abc"); // <- initialization
    p = {2, "abcd"}; // another way to initialize
    // taking input 
    cin >> p.first;
    cin >> p.second;

    // output
    cout << p.first;
    cout << p.second;

    // copy the pair
    pair<int, string> p1 = p;
    // giving refrence 
    pair <int , string> &p2 = p;   
    // p.first give first value nd p.second give second value
    cout << p.first << " " << p.second << endl; 
    
    int a[] = {1, 2, 3};
    int b[] = {2, 3, 4};
    //declaring pair of array
    pair<int, int> p_arr[3];

    p_arr[0] = {1, 2};
    p_arr[1] = {2, 3};
    p_arr[2] = {3, 4};
    swap(p_arr[0], p_arr[2]);
    for(int i = 0; i < 3; i++ ) {
        cout << p_arr[i]. first << " " << p_arr[i].second << endl;
    }
 */