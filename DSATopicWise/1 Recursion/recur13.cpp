
//............ count all zeros in a given number ...............

#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll countZeros(ll n){
   if(n==0)
     return 1;   


    if(n<10)
      return 0;
   
  if(n%10 == 0)
   return 1+countZeros(n/10);

 return countZeros(n/10);
}


int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
    #endif
       freopen("output.txt","w",stdout);
      
     ll n; cin >> n;

    cout << countZeros(n);

    return 0;   
}