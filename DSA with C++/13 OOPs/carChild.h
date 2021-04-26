#include<bits/stdc++.h>
using namespace std;
#include "vehicleParent.h"

class car : public vehicle{
    public : 
    
    int numGears;


    void print() {
        
         // cout << "max Speed : " << maxSpeed << endl;   // private member
        cout << "num of Tyers : " << numTyers << endl;
        cout << "Num of Gears : " << numGears << endl;
        cout << "color : " << color << endl;

    } 
     
     car(int x) : vehicle(x){
         cout << "car's constuctor" << endl;
     }

    ~car(){
        cout  << "car's desturctor" << endl;
    }
};


/*
public member is accessible for inside and outside of class for all.

private member is accessible only inside of class . 

protected member is only accessible outside of class but only for child class. 

vehicle is inherited as public means all accessible inherited member from vehicle remains as it is in car.
but if it inherited as protected then all accessible inherited member becomes  protected in car.
if it is inherited as private then all accessible inherited member becomes private in car.

if we don't declare any access modifier at time of inheriting the vehicle class it is private bydefault 

*/