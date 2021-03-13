// ........... Queue using Array (dynamic) ..........

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

    QueueUsingArrayDmcly <int> Q;

    cout << Q.Size() << endl; // 0
    cout << Q.isEmpty() << endl;  // 1
    
     Q.enqueue(10);
     Q.enqueue(20);
     Q.enqueue(30);
     Q.enqueue(40);
    
    
    
    cout << Q.Size() << endl;  // 4
    cout << Q.dequeue() << endl;  //10
    cout << Q.dequeue() << endl;  //20
    cout << Q.front() << endl;    //30
    cout << Q.dequeue() << endl;  //30
    cout << Q.front() << endl;    //40
    cout << Q.dequeue() << endl;   //40
    
     cout << Q.Size() << endl;     //0

    Q.enqueue(50);
     cout << Q.Size() << endl;  // 1
    cout << Q.front() << endl;  //50



    return 0;
}
