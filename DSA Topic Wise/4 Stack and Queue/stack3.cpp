#include <bits/stdc++.h>
using namespace std;

#include "dynamicStack.h"

int main(){
    #ifndef ONLINE_JDGE
       freopen("input.txt","r",stdin);
    #endif
       freopen("output.txt", "w",stdout);

       StackUsingLL <char> s;
        cout << s.size() << endl;  //0
       cout << s.isEmpty() << endl;   //1 
       cout << s.top() << endl;       // stack is empty

       s.push(65);
       s.push(67);
       s.push(115);
      
      

       cout << s.size() << endl;   // 3
       cout << s.isEmpty() << endl;  // 0
       cout << s.top() << endl;      //s
       cout << s.pop() << endl;      //s
       cout << s.pop() << endl;      //C
       cout << s.pop() << endl;      //A  
       cout << s.top() << endl;      //stack is empty
       s.push(99);   

       cout << s.top() << endl;     //c  
       cout << s.size() << endl;    //1
       cout << s.pop() << endl;     //c
       cout << s.top() << endl;     //stack is empty 
       


return 0;
    
}