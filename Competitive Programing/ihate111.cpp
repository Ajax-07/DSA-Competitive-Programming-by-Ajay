#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
   int n;
   cin >> n;
   ll arr[n];
   for(int i=0; i<n; i++)
        cin >> arr[i];

   sort(arr,arr+n);

   int count=0;
   int sum = 0; 
   for(int i=n; i>=0; i--){
       if((sum + arr[i] )>= 0 ){
           sum += arr[i];
           count++;
       }
   }    

   cout << count ;

    return 0;    
}