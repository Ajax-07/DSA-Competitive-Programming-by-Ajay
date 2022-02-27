#include<bits/stdc++.h>
using namespace std;

void solve(){
   long long D, d, P, Q;
   cin >> D >> d >> P >> Q;

   long long res=0;
   int k = D/d;
  
   res = (k*P*d) + (Q*d)*(k-1)*(k)/2 + (P+k*Q)*(D%d);

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