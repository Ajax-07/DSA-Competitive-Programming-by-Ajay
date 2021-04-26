#include<bits/stdc++.h>
using namespace std;

class vehicle{
    private : int maxSpeed;   // accessible within vehicle class

    protected : int numTyers; // accessible for vehicle child class 

    public : string  color;   // accessible for all

    void print(){
        cout << "max Speed : " << maxSpeed << endl;
        cout << "Num of tyers : " << numTyers << endl;
        cout << "color : " << color << endl;
    }

    vehicle(int x){
        cout << "vehicle's constructor" << endl;
        maxSpeed = x;
    }

    ~vehicle(){
        cout << "vehicle's destructor" << endl;
    }

};
