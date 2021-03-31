
// ................. total no. of way of arranging the tiles ............
//.................. of size 4X1 in 4XN size of wall    ................. 
 

#include<bits/stdc++.h>
using namespace std;

int totalWay(int n){
    
    if(n==0)
     return 0;

   int x = 1+totalWay(n-1);
   int y = 4+totalWay(n-4);

   return x+y;
}


int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
    #endif
       freopen("output.txt","w",stdout);
   
    int n; cin >> n;
    
    cout << totalWay(n);

    return 0;   
}