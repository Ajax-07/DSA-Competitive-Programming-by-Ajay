// #12 - [https://practice.geeksforgeeks.org/problems/count-triplets-with-sum-smaller-than-x5549/1]

#include<bits/stdc++.h>
using namespace std;

	long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    sort(arr, arr+n);
	    long long count=0;
	    
	    for(int i=0; i<n-1; i++){
	        int j=i+1, k=n-1;
	        while(j<k){
	           long long  x = arr[j]+arr[k]+arr[i];
	            if(x<sum){
	                count += k-j;
	                j++;
	            }else k--;
	        }
	    }
	    
	    return count;
	}
		 

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r", stdin);
       freopen("output.txt", "w", stdout);
    #endif

    int n; cin >> n;
	long long arr[n]; 
	for(int i=0; i<n; i++)
	   cin >> arr[i];
    long long sum ; cin >> sum;
	cout <<   countTriplets(arr,n,sum); 

    return 0;
}