
//.......print first and last occurence of an element.......

#include<bits/stdc++.h>
using namespace std;

int first(int arr[], int n, int i, int key){
    if(i==n)
    return -1;
    
    if(arr[i]==key)
        return i;
    return  first(arr, n, i+1, key);
}

// other approch......................
int first(int arr[],int n, int key){
    if(n==0)
     return -1;

    if(arr[0] == key)
       return 0;

    int ans = first(arr+1,n-1,key);

    if(ans == -1)
           return -1;
    else 
       return 1+ans;      
}


int last(int arr[], int n, int i, int key){
    if(i==0)
      return -1;
    
    if(arr[i]==key)
       return i;
     return last(arr,n,i-1,key);  
       
}

//......other approch............
int last(int arr[],int n, int key){
    if(n==0)
      return -1;

    if(arr[n-1] == key)
       return n-1;

    return last(arr,n-1,key);     
}

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
    #endif
       freopen("output.txt","w",stdout);

       int n; cin >> n;
       
       int arr[n];
       for(int i=0; i<n; i++){
           cin >> arr[i];
       }

       int x; cin >> x;

      cout << first(arr,n,0,x) << endl;
     cout << last(arr,n,n-1,x) << endl;
   
   cout << first(arr,n,x) << endl;
   cout << last(arr,n,x) << endl;
    return 0;   
}