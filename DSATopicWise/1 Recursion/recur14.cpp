
//............ Geomatric sum of 1+1/3+1/9+127+...+1/3^n  ..................
//....................  you are given an integer n   ..................
//..................... ex... for n=7 ans=1.49977 ................... 


#include<bits/stdc++.h>
using namespace std;

double GeoSum(int n){
    if(n==0)
     return 1;

   return (double)1/pow(3,n)+GeoSum(n-1);

}

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
    #endif
       freopen("output.txt","w",stdout);
      
     double n; cin >> n;

    cout << GeoSum(n);

    return 0;   
}