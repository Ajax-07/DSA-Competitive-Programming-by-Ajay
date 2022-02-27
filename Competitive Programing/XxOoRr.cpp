#include<bits/stdc++.h>
using namespace std;
#define long long int int
#define mod 10000000007

void fun(int* bin, int x){
    string s="";

    while(x>0){
        s += to_string(x%2);
        x/=2;
    }

    int j=31;

    for(int i=0; i<s.size(); i++){
        if(s[i] == '1')
           bin[j]++;
        j--;   
    }
} 

void solve(){
   int n, k;
   cin >> n >> k;
   int arr[n];
   for(int i=0; i<n; i++)
      cin >> arr[i] ;

   int bin[32] = {0}; 
   for(int i=0; i<n; i++){
       fun(bin,arr[i]);
   }

   int ans=0;

   for(int i=0; i<32; i++){
       ans += ceil(bin[i]/(float)k);
   }

   cout << ans << endl;
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