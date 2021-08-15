// [https://practice.geeksforgeeks.org/problems/sort-a-stack/1#]

#include<bits/stdc++.h>
using namespace std;


class SortedStack{
public:
	stack<int> s;
	void sort();
};


/* The below method sorts the stack s 
you are required to complete the below method */
void SortedStack :: sort()
{
   //Your code here
   if(s.size() == 1)
     return ;
     
    int temp = s.top();
    s.pop();
    sort();
    
    stack<int> s2;
    while(!s.empty()){
        if(temp >= s.top()){
            s.push(temp);
            break;
        }
        s2.push(s.top());
        s.pop();
    }
    if(s.empty())
       s.push(temp);
    
    while(!s2.empty()){
        s.push(s2.top());
        s2.pop();
    }

}


int main(){
    // #ifndef ONLINE_JUDGE
    //   freopen("input.txt", "r", stdin); 
    //   freopen("output.txt", "w", stdout);
    // #endif
    
    SortedStack x ;
    x.s.push(30);
    x.s.push(60);
    x.s.push(50);
    x.s.push(20);
    x.s.push(40);
    x.s.push(10);
    
   
    stack<int> temp = x.s;
    while(!temp.empty()){
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

   x.sort();
   while(!x.s.empty()){
        cout << x.s.top() << " ";
        x.s.pop();
    }
    return 0;   
}