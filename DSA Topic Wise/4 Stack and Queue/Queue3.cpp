// ........... Queue using Linked List (dynamic) ..........

#include <bits/stdc++.h>
using namespace std;
#include "dynamicQueue.h"


int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  

    QueueUsingLLDmcly <double> Q;

    cout << Q.size() << endl;  // 0
    cout << Q.isEmpty() << endl;  // 1

    Q.enqueue(10.123);
    Q.enqueue(20.543);
    Q.enqueue(30.6523);
    Q.enqueue(40.642);

    cout << Q.size() << endl;   // 4
    cout << Q.dequeue() << endl;  // 10.123
    cout << Q.dequeue() << endl;  // 20.543
    cout << Q.dequeue() << endl;  // 30.6523
    cout << Q.front() << endl;    // 40.642
    cout << Q.dequeue() << endl;   // 40.642
    cout << Q.dequeue() << endl;   // Queue Empty!0
    cout << Q.front() << endl;     // Queue Empty!0

   Q.enqueue(50.0);
   Q.enqueue(60.9);

    cout << Q.size() << endl; // 2
    cout << Q.isEmpty() << endl; //0
    
    


    return 0;
}
