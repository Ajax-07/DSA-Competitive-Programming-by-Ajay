// #23 - [https://practice.geeksforgeeks.org/problems/smallest-factorial-number5929/1#]
#include<bits/stdc++.h>
using namespace std;

 int fun(int n){
        if(n<5) return 0;
        
        return n/5+fun(n/5);
    }
    
    int findNum(int n){
         int lb = 5;
         int ub = n*5;
         int ans = 0;
         while(lb<=ub){
             int mid = (lb+ub)/2;
             if( fun(mid) >= n){
                 ans = mid;
                 ub = mid-1;
             }
             else lb = mid+1;     
         }
    }

    
int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r",stdin);
       freopen("output.txt", "w",stdout);
    #endif
    int n;
    cin >> n;

    cout << findNum(n);
    return 0;
}