// ........... Queue using Array (staticaly) ..........

#include <bits/stdc++.h>
using namespace std;
#include "staticQueue.cpp"


int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  

    QueueUsingArray Q(5);

    cout << Q.Size() << endl; // 0
    cout << Q.isEmpty() << endl;  // 1
    
    Q.enqueue(10);
    Q.enqueue(20);
    Q.enqueue(30);
    Q.enqueue(40);
    Q.enqueue(50);
    Q.enqueue(60); // Queue Full!

    
    cout << Q.front() << endl;   // 10
    cout << Q.dequeue()<< endl; // 10
    cout << Q.dequeue()<< endl;  // 20
   

    Q.enqueue(60);
    Q.enqueue(70);
    Q.enqueue(80);

    
    cout << Q.front() << endl;    // 30
    cout << Q.dequeue() << endl; // 30


    cout << Q.front() << endl;    // 40
    cout << Q.Size() << endl;     // 4
    cout << Q.isEmpty() << endl;    // 0
    


    return 0;
}
