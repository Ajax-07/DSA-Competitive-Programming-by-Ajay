// .............print increasing and decreasing........


#include<bits/stdc++.h>
using namespace std;

void dec(int n){
   
   if(n==0)
     return ;

    cout << n << " ";
    dec(n-1); 
}

void inc(int n){
    if(n==0)
     return ;
     
     inc(n-1);
     cout << n << " ";
}

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
    #endif
       freopen("output.txt","w",stdout);

       int n; cin >> n;
       
       dec(n);
       cout << endl;
       inc(n);
     
    return 0;   
}