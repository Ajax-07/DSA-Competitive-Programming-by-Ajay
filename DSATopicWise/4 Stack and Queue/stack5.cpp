//................Reverse stack ........

#include<bits/stdc++.h>
using namespace std;


void reverseStack(stack <int> &s1, stack <int> s2){
    if(s1.size() == 1 || s1.size() == 0)
      return ;

    int temp = s1.top();
    s1.pop();

    reverseStack(s1,s2);

    while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
    }  

    s1.push(temp);   

    while(!s2.empty()){
        s1.push(s2.top());
        s2.pop();
    }
    
}

int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
    #endif

    stack <int> s1,s2;

    int x;
    while(cin >> x && x!=-1){
        s1.push(x);
    }


   reverseStack(s1,s2);

   while(!s1.empty()){
       cout << s1.top() << " ";
       s1.pop();
   }

    return 0;
}