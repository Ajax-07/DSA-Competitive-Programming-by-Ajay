
//......Reverse a string using recursion.........


#include<bits/stdc++.h>
using namespace std;

void reverseStr(string s){
   if(s.length()==0)
     return;
   
    reverseStr(s.substr(1));
      cout << s[0];
   
}


int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
    #endif
       freopen("output.txt","w",stdout);
    
    string s;
    getline(cin , s);
   reverseStr(s) ;
    
    return 0;
}
