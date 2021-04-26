#include<bits/stdc++.h>
using namespace std;

#include "carchild.h"

class hondaCity : public car{
    public : int price ;

    hondaCity(int x ) : car(x){
        color = "white";
        //maxSpeed  private
        numTyers = 4;
        numGears = 7; 
        cout << "honda city constructor " << endl;
    }

    ~hondaCity(){
        cout << "honda city destructor " << endl;
    }
};
