#include<bits/stdc++.h>
using namespace std;
#include "hondacity.h"


int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif

    vehicle v(60);    
    //v.maxSpeed = 200;  // error private member
     v.color = "black";    
    // v.numTyers = 4;      // protected member

    v.print();

    car c(30);
    c.color = "red";
    c.numGears = 5;
    //c.maxSpeed = 200;   //  maxSpeed is not in car
    // c.numTyers = 6;     // protected only accees within car and vehicle
    
    v.print(); 
    c.print();

    hondaCity h(40);

    h.price = 500000;

    h.print();
    
    return 0;
}