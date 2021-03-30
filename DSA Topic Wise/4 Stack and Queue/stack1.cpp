//.............. static stack  ............

#include <bits/stdc++.h>
using namespace std;

#include "staticStack.cpp"

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
    #endif
       freopen("output.txt", "w",stdout);

    StackUsingArray s(4);  // size of stack is 4

    cout << s.size() << endl;   //0
    cout << s.isEmpty() << endl;   //1

    s.push(30);  // 30 push
    s.push(80);  // 80 push 
    s.push(60);  // 60 push
    s.push(20);  // 20 push 
    s.push(10);  // stack is full
    s.push(50);  // stack is full
    

    cout << s.size() << endl; // size 4
    cout << s.isEmpty() << endl;  // 0 (not)
    
    cout << s.top() << endl;   // 20
    cout << s.pop() << endl;   // 20
    cout << s.top() << endl;   // 60
    cout << s.size() << endl;  // 3
    cout << s.pop() << endl;   // 60
    cout << s.size() << endl;  // 2
    cout << s.isEmpty() << endl;  // 0 
  
   cout << s.pop() << endl;  // 80
   cout << s.pop() << endl;  // 30
   cout << s.pop() << endl;  // stack is empty -1
   cout << s.pop() << endl;  // stack is empty -1

return 0;
    
}