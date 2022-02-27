#include<bits/stdc++.h>
using namespace std;
#define long long int
#define mod 10000000007
 
void solve(){
    int g,c;
    cin >> g >> c;
    
    int res = ((c%mod)*(c%mod))%mod/(2*g);

    cout << res << endl;
   
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