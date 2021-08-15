#include<bits/stdc++.h>
using namespace std;

// memoization
int LIS2(int arr[], int n, int i, int ans[]){
    if(i==n-1){
        ans[n] = 1;
        return 1;
    }

    cout << "#";

    if(ans[i] != -1)
    return ans[i];

    int a = 0, b = 0;
    
    if(arr[i] < arr[i+1]){
        a = 1+LIS2(arr, i++, n, ans);
    }
    else b = LIS2(arr, i++, n, ans);

    ans[i] = max(a,b);
    return ans[i];
}
int LIS2(int arr[], int n){
    int ans[n+1];
    for(int i=0; i<=n; i++)
     ans[i] = -1;

    return LIS2(arr,0,n, ans); 
}

// recursive
int LIS(int arr[], int n){
    if(n<=1){
        return 1;
    }
    cout << "s";
    int a = 0, b = 0;
    
    if(arr[0] < arr[1]){
        a = 1+LIS(arr+1, n-1);
    }
    else b = LIS(arr+1, n-1);

    return max(a,b);

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

    cout << LIS(arr, n) << endl;    
    cout << LIS2(arr, n) << endl;    

    return 0;    

}