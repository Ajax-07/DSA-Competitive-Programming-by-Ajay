
// ............  Check if string is palindrome  ................

#include<bits/stdc++.h>
using namespace std;


bool CheckPldrm(string s, int i, int j){
  if(i>=j)
   return true;
   
   if(s[i] != s[j])
     return false;

   return CheckPldrm(s,  i+1,  j-1);
      
}


int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
    #endif
       freopen("output.txt","w",stdout);
    
    string str;
    cin >> str;

    (CheckPldrm(str,0,str.length()-1)) ? cout << "YES" : cout << "NO" ;

    

    return 0;
}    