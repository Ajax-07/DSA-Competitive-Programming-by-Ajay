#include<bits/stdc++.h>
using namespace std;

#include "impliment.h"

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    priorityQueue<int> pq;

    cout << pq.size() << endl;     // 0
    cout << pq.isEmpty() << endl;    // 1

    pq.insert(50); 
    pq.insert(30); 
    pq.insert(20); 
    pq.insert(60); 
    pq.insert(100); 
    pq.insert(5); 
    pq.insert(50); 

    cout << pq.getMin() << endl;    // 5
    cout << pq.size() << endl;    //  7
    
    cout << pq.remove() << endl;    // 5
    cout << pq.remove() << endl;    // 20
    cout << pq.remove() << endl;    // 30
    cout << pq.remove() << endl;    // 50
     
    cout << pq.size() << endl;    //  3

    cout << pq.remove() << endl;    // 50
    cout << pq.remove() << endl;    // 60

    cout << pq.getMin() << endl;    // 100

    cout << pq.remove() << endl;    // 100
    cout << pq.remove() << endl;    // Empty! 0
    cout << pq.size() << endl;    //  0
    
    pq.insert(8);
    pq.insert(6);
    pq.insert(3);
    pq.insert(5);

    cout << pq.size() << endl;   // 4
    cout << pq.isEmpty() << endl;   // 0
    cout << pq.remove() << endl;   // 3
    cout << pq.remove() << endl;   // 5
    cout << pq.getMin() << endl;   // 6
    cout << pq.size() << endl;   // 2






    //  inbuilt priority queue (By default max)

    priority_queue<int> x;

    for(int i=1;  i<=10; i++){
        int temp ;
        cin >> temp;
        x.push(temp);
    }

    while(!x.empty()){
        cout << "Current Size   " << x.size();
        cout << "   Top Element " << x.top() <<  endl;
        x.pop();
    }


    
    return 0;

}