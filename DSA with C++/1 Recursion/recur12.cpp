//.............. multiplication of two number ......

#include<bits/stdc++.h>
using namespace std;

int multiplication(int m, int n){
    if(n==1)
      return m;

  return  m+multiplication(m,n-1);  
}


int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
    #endif
       freopen("output.txt","w",stdout);
      
      int n, m; cin >> n >> m;

      cout << multiplication(m,n);

    return 0;   
}