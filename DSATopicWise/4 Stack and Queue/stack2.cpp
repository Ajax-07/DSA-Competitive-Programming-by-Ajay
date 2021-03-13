#include <bits/stdc++.h>
using namespace std;

#include "dynamicStack.h"

int main(){
    #ifndef ONLINE_JDGE
       freopen("input.txt","r",stdin);
    #endif
       freopen("output.txt", "w",stdout);

    StackUsingArray <double> s;  // size of stack is 2 now by default
    s.push(3.84);
    s.push(2.54);
    s.push(3.000);
    s.push(3.11222);
    s.push(3.533);
    s.push(3.84);
    
    


    cout << s.size() << endl; // 6
    cout << s.top() << endl; // 3.84
    cout << s.pop() << endl; // 3.84
    cout << s.pop() << endl; // 3.533
    cout << s.pop() << endl; // 3.11222
    cout << s.pop() << endl; // 3
    cout << s.size() << endl; // 2
    cout << s.isEmpty() << endl; // 0
    cout << s.pop() << endl; // 2.84
    cout << s.pop() << endl; // 3.84
    cout << s.pop() << endl; // stack is empty
    cout << s.isEmpty() << endl; // 1


return 0;
    
}