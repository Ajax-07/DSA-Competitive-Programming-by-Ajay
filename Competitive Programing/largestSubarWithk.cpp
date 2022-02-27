#include<bits/stdc++.h>
using namespace std;


int largestSubArraySumOfK(int arr[], int n, int k){
    int i=0, j=0;
    int sum=0; int ans = 0;
    while(j<n){
        sum += arr[j];
        if(sum == k) ans = max(ans,j-i+1);

        while(sum>k){
            sum -= arr[i];
            i++;
        }
        j++;

    }

    return ans;
}

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
   int n;
   cin >> n;
   int arr[n];
   for(int i=0; i<n; i++)
        cin >> arr[i];
    
    int k; cin >> k;
    cout << largestSubArraySumOfK(arr, n, k);

    return 0;    
}