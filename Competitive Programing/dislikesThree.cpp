#include<bits/stdc++.h>
using namespace std;

int solve(int k){
   int count=0;
   for(int i=1; ; i++){
       if(i%3==0 || i%10 == 3)
         continue;
       count++;

       if(count == k)
         return i;  
   }

   return -1;
}

int main(){
     #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif

    int test;
    cin >> test;
    while(test--){
        int k;
        cin >> k;

      
        cout << solve(k) << endl;     
    }

    return 0;

}