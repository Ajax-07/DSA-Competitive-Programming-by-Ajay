// #18 - [http://theoryofprogramming.com/2017/12/16/find-pivot-element-sorted-rotated-array/]

#include<bits/stdc++.h>
using namespace std;

int peakElement(int arr[], int low, int high, int lowerBound, int upperBound)
{
    int mid = low + (high - low) / 2;
     
    if (mid == lowerBound) {
        if (mid == upperBound) {
            // Only 1 element
            return mid;
        } else if (arr[mid] >= arr[mid + 1]) {
            // Pivot is the greater element
            return mid;
        }
    } else if (mid == upperBound) {
        if (arr[mid] >= arr[mid - 1]) {
            // Pivot is the greater element
            return mid;
        }
    } else {
        if (arr[mid] >= arr[mid + 1] && arr[mid] >= arr[mid - 1]) {
            // Mid value is the pivot
            return mid;
        } else if (arr[mid] > arr[high]) {
            // The Pivot is in the second half
            return peakElement(arr, mid + 1, high, lowerBound, upperBound);
        } else if (arr[mid] < arr[high]) {
            // The Pivot is in the first half
            return peakElement(arr, low, mid - 1, lowerBound, upperBound);
        }
    }
     
    return -1;
}

int pivote(int arr[], int l, int r){
    
    int mid=-1;
    while(l<=r){
         mid = (l+r)/2;

        if(arr[mid] < arr[l]){
            r=mid-1;
        }else{
            l=mid+1;
        }
    }

   return mid;
}

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r",stdin);
       freopen("output.txt", "w",stdout);
    #endif
       
       int n; cin >> n;
       int arr[n]; 
       for(int i=0; i<n;i++) cin >> arr[i];

      cout <<  pivote(arr, 0,n-1);
     // cout <<  peakElement(arr, 0,n-1,0,n-1);

    return 0;   
}