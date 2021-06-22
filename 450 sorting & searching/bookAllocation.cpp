// #20 - [https://practice.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1#]

#include<bits/stdc++.h>
using namespace std;
#define long long int int

bool check(int arr[], int n, int m, int mid){
        int sum=0;
        int stu=1;
        for(int i=0; i<n; i++){
           sum += arr[i];
           if(sum > mid){
               stu++;
               sum = arr[i];
           }
           
           if(stu > m) return false;
        }
        return true;
    }
    
    //Function to find minimum number of pages.
    int findPages(int arr[], int n, int m) 
    {
        sort(arr, arr+n);

         int lb = 0;
         int  ub=0;
        for(int i=0; i<n; i++)
            ub+=arr[i];
            
         int  ans = 0;
        
        while(lb<=ub){
            int mid = lb+(ub-lb)/2;
            if(check(arr,n,m,mid)){
                ans = mid;
                ub = mid-1;
            }else lb = mid+1;
        }
        
        return ans;
    }

   
int32_t main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r",stdin);
       freopen("output.txt", "w",stdout);
    #endif

    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    int m; cin >> m;

    cout << findPages(arr, n, m);

    return 0;   
} 