// #3 - [https://leetcode.com/problems/search-in-rotated-sorted-array/]

#include<bits/stdc++.h>
using namespace std;
int search(vector<int> &nums, int l, int r, int target){
        if(l>r)
            return -1;
        int mid = (l+r)/2;
        if(nums[mid] == target)
            return mid;
        if(nums[l] <= nums[mid]){
            if(target >= nums[l] && target < nums[mid]){
               return search(nums,l,mid-1,target);
            }else return search(nums,mid+1,r,target);
        }else{
             if(target > nums[mid] && target <= nums[r])
                 return search(nums,mid+1,r,target);
            else return search(nums,l,mid-1,target);
        }  
            
    }

 int search(vector<int>& nums, int target) {
       /*
        int i=0; 
        int j=nums.size()-1;
        while(i<=j){
            int mid = (i+j)/2;
            if(nums[mid] == target)
              return mid;

            // if right sorted  
            if(nums[i] <= nums[mid]){
               if(target >= nums[i] && target < nums[mid])
                j=mid-1;
                else i=mid+1;
            }// else right is sorted
            else{
                 if(target > nums[mid] && target <= nums[j])
                    i=mid+1;
                else j=mid-1;    
            }
        }
        return -1;
        */
        return search(nums,0,nums.size()-1, target);
    }
  

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    
    int n ; cin >> n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        arr.push_back(x);
    }
    int target; cin >> target;

    cout <<  search(arr, target);

    return 0;
}