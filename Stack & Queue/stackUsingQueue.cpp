//  [https://practice.geeksforgeeks.org/problems/stack-using-two-queues/1#]

#include<bits/stdc++.h>
using namespace std;

class Stack{
    int n;
    queue<int> q1;
    queue<int> q2;
    
    public :
    Stack() : n(0) {}

    void Push(int x);
    int Pop();

    int size() {
        return n;
    }
};

void Stack :: Push(int x){
    /*
    // O(n)
    q2.push(x);

    while(!q1.empty()){
        q2.push(q1.front());
        q1.pop();
    }

    queue<int> temp = q1;
    q1 = q2;
    q2 = temp;
    n++;
    */

    // O(1)
    q1.push(x);
    n++;
}

int Stack :: Pop(){
    if(q1.empty())
     return -1;
     /*
        // O(1)
    int temp = q1.front();
    q1.pop();
    n--;
    return temp;
    */

    
    // O(n)
    int i=0; 
    while(i<q1.size()-1){
        q2.push(q1.front());
        q1.pop();
    }
    
    int temp = q1.front();
    q1.pop();
    
    while(!q2.empty()){
        q1.push(q2.front());
        q2.pop();
    }
    n--;
    return temp;

    
}

int main(){
    // #ifndef ONLINE_JUDGE
    //   freopen("input.txt", "r", stdin); 
    //   freopen("output.txt", "w", stdout);
    // #endif

    Stack s;
    s.Push(10);   
    s.Push(20);   
    s.Push(30);   
    s.Push(40);   

    cout << s.size() << endl;

    cout <<  s.Pop()  << " " << s.Pop() << " " << s.Pop() << " " << s.Pop() << endl;

    cout << s.Pop() << endl;
    cout << s.size() << endl;

    s.Push(50);
    s.Push(60);
    cout << s.size()  << " " << s.Pop() << " " << s.size() << endl;
    return 0;   
}