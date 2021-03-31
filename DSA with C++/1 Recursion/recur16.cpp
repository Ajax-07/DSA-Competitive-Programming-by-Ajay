
//......... convert given string to their respective integer .......
 
#include<bits/stdc++.h>
using namespace std;

int stringToInt(string s){
    if(s.length() == 0)
     return -1;

   int integer = pow(10,s.length()-1)*((int)s[0]-48);

   return integer+stringToInt(s.substr(1));

}

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
    #endif
       freopen("output.txt","w",stdout);
      
     string s;
     cin >> s;

     cout << sizeof(s) << " " << s.length() << endl;
 
    int ans = stringToInt(s);
    cout << ans << " " << sizeof(ans) ;
    return 0;   
}