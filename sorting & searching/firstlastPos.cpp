// #1 [https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1#]

#include<bits/stdc++.h>
using namespace std;


vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int> ans;
    int i=0; 
    int j=n-1;
    int a=-1, b=-1;
    
    while(i<n){
        if(arr[i] == x){
           a=i;
         break;
        } i++;
      
    }
    
    
    while(j>=0){
        if(arr[j] == x){
         b=j;
         break;
        } j--;
      
    }
    ans.push_back(a);
    ans.push_back(b);
    return ans;
}

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r", stdin);
       freopen("output.txt", "w", stdout);
    #endif

    int n;  cin >> n;
    int x; cin >> x;
    int arr[n];
    for(int i=0; i<n; i++)
       cin >> arr[i];

    vector<int> ans = find(arr,n,x);
    for(int i=0; i<ans.size(); i++)
        cout << ans.at(i) << " ";   
    
    return 0;
}