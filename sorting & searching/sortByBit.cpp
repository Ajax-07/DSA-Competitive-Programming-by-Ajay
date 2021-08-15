// #16 - [https://practice.geeksforgeeks.org/problems/sort-by-set-bit-count1153/1#]

#include<bits/stdc++.h>
using namespace std;
 
   static bool compare(pair<int,int> a, pair<int, int> b){
        if(a.first>b.first)  return true;
        else if(a.first == b.first) return a.second<b.second;
        else return false;
    }
    void sortBySetBitCount(int arr[], int n)
    {
        // Your code goes here
        pair<int,int> p[n];
        for(int i=0; i<n; i++){
            int bit=0;
            int x=arr[i];
            while(x){
                if(x&1)  bit++;
                x = x>>1;
            }
            
            p[i]=make_pair(bit,i);
        }
        
        sort(p,p+n,compare);
        
        int temp[n];        
        for(int i=0; i<n; i++)
           temp[i] = arr[p[i].second];
        for(int i=0; i<n; i++) arr[i] = temp[i];   
    }
int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r",stdin);
       freopen("output.txt", "w",stdout);
    #endif
       
       int n; cin >> n; 
       int arr[n];
       for(int i=0; i<n; i++)
         cin >> arr[i];

       sortBySetBitCount(arr,n);

       for(auto x : arr)   cout << x << " ";  

    return 0;   
}