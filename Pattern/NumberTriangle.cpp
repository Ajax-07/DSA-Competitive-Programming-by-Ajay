#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout);
    #endif

    int n;
    cin >> n;
    
    for(int i=1; i<=n; i++){
      int k=i;
      for(int j=1; j<2*n; j++){
        if(j>=n-i+1 && j<= n+i-1){
          if(j<n){
            cout << k  << " ";
            k++;
          }else{
            cout << k << " ";
            k--; 
          }
             
        }
        else 
          cout << "  "; 
  
      }
      cout << endl;
    }
    

    return 0;
}


/*
i/p : 5

        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4 
5 6 7 8 9 8 7 6 5

*/