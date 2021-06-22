// #19 - [https://practice.geeksforgeeks.org/problems/k-th-element-of-two-sorted-array1317/1#]
#include<bits/stdc++.h>
using namespace std;

 int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int i=0;
        int j=0;
        int p=0; 
        while(i<n && j<m){
           
            if(arr1[i] < arr2[j]){
              p++;
              if(p == k)
                return arr1[i];
              i++;    
            }
            else{
                p++;
                if(p==k)
                   return arr2[j];
                j++;   
            }   
        }
        while(i<n){
            p++;
            if(p == k)
              return arr1[i];
            i++;  
        }
        
        while(j<m){
            p++;
            if(p==k)
              return arr2[j];
            j++;
        }
        return -1;
    }

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r",stdin);
       freopen("output.txt", "w",stdout);
    #endif
       
    int n,m; cin >> n >> m;
    int arr1[n], arr2[m]; 
    for(int i=0; i<n;i++) cin >> arr1[i];
    for(int i=0; i<m;i++) cin >> arr2[i];

    int k; cin >> k;

    cout << kthElement(arr1, arr2, n, m, k);

    return 0;   
}