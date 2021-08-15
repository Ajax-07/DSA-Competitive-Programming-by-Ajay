// [https://practice.geeksforgeeks.org/problems/queue-using-two-stacks/1]

#include<bits/stdc++.h>
using namespace std;

class Queue{
    int n;
    stack<int> s1;
    stack<int> s2;

    public :
    Queue() : n(0) {}

    void Push(int x) ;
    int Pop();

    int size(){
        return n;
    }

};

void Queue :: Push(int x){
    // O(1)
    n++;
    
    //s1.push(x);

    // O(n)
     while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
    }
    
    s2.push(x);
    while(!s2.empty()){
        s1.push(s2.top());
        s2.pop();
    }

}

int Queue :: Pop(){
    if(s1.empty())
      return -1;

    // O(n)
    /*
    while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
    }  

    int temp = s2.top();
    s2.pop();

    while(!s2.empty()){
        s1.push(s2.top());
        s2.pop();
    }
    */
    n--;

    // O(1)
    int temp = s1.top();
    s1.pop();
    return temp;
}

int main(){
    // #ifndef ONLINE_JUDGE
    //   freopen("input.txt", "r", stdin); 
    //   freopen("output.txt", "w", stdout);
    // #endif

    Queue q;   

    q.Push(10);   
    q.Push(20);   
    q.Push(30);   
    q.Push(40);   

    cout << q.size() << endl;

    cout <<  q.Pop()  << " " << q.Pop() << " " << q.Pop() << " " << q.Pop() << endl;

    cout << q.Pop() << endl;
    cout << q.size() << endl;

    q.Push(50);
    q.Push(60);
    cout << q.size()  << " " << q.Pop() << " " << q.size() << endl;

    return 0;   
}