// #7 - [https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1]

#include<bits/stdc++.h>
using namespace std;

int *findTwoElement(int *arr, int n) {
        // code here
        int temp[n] = {};
        for(int i=0; i<n; i++)
           temp[arr[i]-1] += 1 ;
        
        int missing;
        int repeating;
        for(int i=0; i<n; i++){
            if(temp[i] == 0)
              missing = i+1;
            if(temp[i] == 2)
                repeating = i+1;
        } 
        
        int* ans = new int[2];
        ans[0] = repeating;
        ans[1] = missing;
        return ans;
    }

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
       cin >> arr[i];

    int* res = findTwoElement(arr,n);
    for(int i=0; i<2; i++)
      cout << res[i] << " ";  

    return 0;
}