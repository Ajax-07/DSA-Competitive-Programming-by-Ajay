#include<bits/stdc++.h>
using namespace std;

// recursive
int totalWays(int arr[], int n, int amount){
    if(amount == 0 || n==0)
      return 1;

    if(arr[0] <= amount){
        int temp = amount/arr[0];
       return totalWays(arr+1, n-1,amount-amount*temp) + totalWays(arr+1, n-1, amount);
    } 
    return totalWays(arr+1, n-1, amount); 
}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n; 
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    int amount; cin >> amount;    

   cout << totalWays(arr,n,amount);    

    return 0;    

}