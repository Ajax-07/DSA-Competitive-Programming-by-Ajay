#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007

long long power(long long x, long long N){
    if(x==0) return 0;
    if(N==0) return 1;

    if(N%2 == 0)
        return (power(x,N/2)%MOD * power(x,N/2)%MOD)%MOD;
    else     
        return (x*(power(x,N/2)%MOD * power(x,N/2)%MOD))%MOD;
    
}

void solve(){
  long long N,M;
  cin >> N >> M;
  long long x = (power(2,N)-1)%MOD;

  long long res = power(x,M)%MOD;

  cout << res << endl;
}

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif

   int n;
   cin >> n;

   while(n--)  solve();
   
   return 0;    
}