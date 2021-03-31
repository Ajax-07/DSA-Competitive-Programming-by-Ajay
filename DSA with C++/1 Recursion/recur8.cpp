
// .......... Move all 'x' Char from a string  to the end of string............

#include<bits/stdc++.h>
using namespace std;


string MoveX(string s){
   if(s.length()==0)
      return "";

   char temp = s[0];
   if(temp == 'x' || temp == 'X')
       return MoveX(s.substr(1)) + temp;

   return temp + MoveX(s.substr(1));       
}



int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
    #endif
       freopen("output.txt","w",stdout);
    
    string str;
    cin >> str;

   cout << MoveX(str);

    return 0;
}    