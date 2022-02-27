#include<bits/stdc++.h>
using namespace std;
#define ISO  ios :: sync_with_stdio(0); cin.tie(0); cout.tie(0);

// int solve(int k){
  
// }

int main(){
   
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif

    int test;
    cin >> test;
    while(test--){
       int c,d;
       cin >> c >> d;

       if(c==0 && d==0)
          cout << 0 << endl;
        else if(c==d)
           cout << 1 << endl;
        else if(abs(d-c)%2 != 0 )
           cout << -1 << endl;
         else 
            cout << 2 << endl;       
              
    }

    return 0;

}