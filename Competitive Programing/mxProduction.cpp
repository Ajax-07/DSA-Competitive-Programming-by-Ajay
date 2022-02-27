#include<bits/stdc++.h>
using namespace std;
#define long long int int
#define mod 10000000007


void solve(){
   int d,x,y,z;
   cin >> d >> x >> y >> z;
  
   int ans1 = 7*x;
   int ans2 = d*y + (7-d)*z;

   cout << max(ans1,ans2) << endl;
}


int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif

    int test;
    cin >> test;
    while(test--) solve();

    return 0;
}