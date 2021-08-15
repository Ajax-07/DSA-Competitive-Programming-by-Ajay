#include<bits/stdc++.h>
using namespace std;

stack<int> reverseStack(stack<int> s){
    if(s.size() == 1)
      return s;

    int temp = s.top();
    s.pop();  
    stack<int> smallAns = reverseStack(s);

    stack<int> s2 ;
    while(!smallAns.empty()){
        s2.push(smallAns.top());
        smallAns.pop();
    }
    s2.push(temp);
    stack<int> ans;
    while(!s2.empty()){
        ans.push(s2.top());
        s2.pop();
    }

    return ans;

}


int main(){
    // #ifndef ONLINE_JUDGE
    //   freopen("input.txt", "r", stdin); 
    //   freopen("output.txt", "w", stdout);
    // #endif

    stack<int> s ;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    stack<int> temp = s;
    while(!temp.empty()){
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

   stack<int> ans = reverseStack(s);
   while(!ans.empty()){
        cout << ans.top() << " ";
        ans.pop();
    }
    return 0;   
}