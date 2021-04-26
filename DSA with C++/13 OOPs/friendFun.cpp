#include<bits/stdc++.h>
using namespace std;

// abstract class
class vehicle{
    protected : int maxSpeed;
    protected : string color;
    
    public:
    vehicle(){
        maxSpeed = 180;
        color = "black";
    }
    virtual void show() = 0;    // vertual function

} ;



void test();

class bus : public vehicle{       // bus need to be define print()
    public :
      void  print();

     void  show(){
         
          cout << maxSpeed  << "  " << color << endl;
      }
};

class truck{
    private : int x;
    protected : int y;
    public:
     int z;
   
 friend void bus :: print(); // friend function
 friend void test();          // friend function

 // friend class 
 friend class bus;
};

void bus :: print() {
    truck t;
    t.x = 20;
    t.y = 40;

    cout << t.x << " " << t.y << endl;
}

void test(){
    truck t;
    t.x = 200;
    t.y = 300;

    cout << t.x+t.y << endl;
}


int main(){

      #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
      
      bus b;

      b.print();

      b.show();

      test();

    return 0;
}