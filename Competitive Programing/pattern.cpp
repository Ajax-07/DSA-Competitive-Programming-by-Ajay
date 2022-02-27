#include<bits/stdc++.h>
using namespace std;

void fun(string s){
    if(s.size() == 0)
     return ;
     if(s[0] == 'a' || s[0] == 'e' || s[0] == 'i' || s[0] == 'o' || s[0] == 'u')
        fun(s.substr(1));
    else {
        cout << s[0];
        fun(s.substr(1));
    }
    
    
}

int main(){

     #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    
    string s ;
    cin >> s;
    fun(s);
    // int rev = fun(n);

    // (rev == n) ? cout << "ha gandu" : cout << "bhag bsdk";


    
    return 0;
}
