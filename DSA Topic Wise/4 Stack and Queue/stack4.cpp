//......... Balanced paranthesis ..........
//.......   Ex.. {7 + (7-3) * [ 8-{4 (84) } ] % 93 } ==> true; ..........

#include <bits/stdc++.h>
using namespace std;

#include "dynamicStack.h"

int main(){
    #ifndef ONLINE_JDGE
       freopen("input.txt","r",stdin);
    #endif
       freopen("output.txt", "w",stdout);

       StackUsingLL <char> s;
       string str;
       getline(cin , str);

       bool flag = false;

       for(int i=0; i<str.size(); i++){
           if(str[i] == '(' || str[i] == '{' || str[i] == '[')
               s.push(str[i]);


           if(str[i] == ')' || str[i] == '}' || str[i] == ']'){
            if(s.size()>0 && (s.top() == str[i]-1 || s.top() == str[i]-2))
                  {s.pop(); flag = true;}
            else {   flag = false;   break;  }
            } 
           // cout << str[i] << " ";      
        }

        if(flag)
           cout << true << endl;
        else cout << false << endl;
       


return 0;
    
}