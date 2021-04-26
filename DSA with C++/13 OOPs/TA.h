#include<bits/stdc++.h>
using namespace std;
#include "teacher.h"
#include "student.h"

class TA : public teacher , public student{
    private : string course;

    public : 
     TA(){
         name = "ajay";
         age = 21;
         roll = 15;
         course = "DSA";
     }
     void print(){
         cout << "name " << name << endl;
         cout << "age " << age << endl;
         cout << "roll  " << roll << endl;
         cout << "course opted " << course << endl;
     }
};