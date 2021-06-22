// #17 - [https://practice.geeksforgeeks.org/problems/minimum-swaps/1#]

#include<bits/stdc++.h>
using namespace std;
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    int n = nums.size();
	    int temp[n];
	    for(int i=0; i<n; i++)
	        temp[i] = nums[i];
	    
	    int swpCount=0;
	    sort(temp, temp+n);
	    for(int i=0; i<n; i++){
	        nums[i] = lower_bound(temp, temp+n, nums[i])-temp;
	    }
	    for(int i=0; i<n; i++){
	         while(i!=nums[i]){
	             int k=nums[nums[i]];
	             nums[nums[i]] = nums[i];
	             nums[i] = k;
	             swpCount++;
	         }
	    }
	 return swpCount;        
	}

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r",stdin);
       freopen("output.txt", "w",stdout);
    #endif
       
    int n; cin >> n; 
    vector<int> arr(n);
    for(int i=0; i<n; i++){
      cin >> arr[i];
    }

    cout << minSwaps(arr);


    return 0;   
}