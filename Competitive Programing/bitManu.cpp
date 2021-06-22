#include<bits/stdc++.h>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif

    int n; cin >> n;
    int i; cin >> i; 

    // check set or not
    // int x = pow(2,i);  // or
    int x = 1<<i;
    (x & n) ?cout << "set" : cout << "not set" ; cout << endl;
    (n&1<<i) ?cout << "set" : cout << "not set" ; cout << endl;

    // flip
    int y = n^1<<i;
    cout << y << endl;

    // check even odd
    n&1 ? cout << "Odd" : cout << "even" ; cout << endl;

    // check n is power of 2
    (n&n-1) ? cout << "No: Not power Of 2" : cout << "Yes: power of 2" ; cout << endl;

    // remove LSB to i
    int z = (n>>i)<<i;
    cout << z << endl;

    // clear all bits to i from LSB
    int mask = ~((1<<(i+1))-1);
    int res = n&mask;
    cout << res << endl;
    
    return 0;
}