// rotate array element by k from stating
#include<bits/stdc++.h>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r", stdin);
       freopen("output.txt", "w", stdout);
    #endif

   int n,k; cin >> n >> k;
   int arr[n];
   for(int i=0; i<n; i++){
       cin >> arr[(n-k+i)%n];
   }

   for(int item : arr)
      cout << item << " ";
   

   
    return 0;
}