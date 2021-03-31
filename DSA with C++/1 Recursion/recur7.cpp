
// ........ Remove all duplicates from string............

#include<bits/stdc++.h>
using namespace std;


string removeDup(string s){
   if(s.length() == 0)
      return "";

     char temp  = s[0];
     if(temp != s[1])
        return temp+removeDup(s.substr(1));
     else return removeDup(s.substr(1));   
}


int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
    #endif
       freopen("output.txt","w",stdout);
    
    string str;
    cin >> str;

   cout << removeDup(str);

    return 0;
}