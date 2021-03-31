//......... return all possible way to climbe n staircase  ................

#include<bits/stdc++.h>
using namespace std;

int staircaseWay(int n){
    if(n==0 || n==1)
      return 1;
    if(n==2)
     return 2;
    
  return staircaseWay(n-1)+staircaseWay(n-2)+staircaseWay(n-3);   
}

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
    #endif
       freopen("output.txt","w",stdout);
     
     int n ; cin >> n;

     cout << staircaseWay(n);

    return 0;   
}