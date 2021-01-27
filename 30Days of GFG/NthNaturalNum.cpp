

// .............DAY 2 ...........


#include<bits/stdc++.h>
using namespace std;

	long long findNth(long long N){
        long long ans=0;
        long long temp = 1;
        while(N!=0){
            long long dig=N%9;
             N=N/9;
             ans+=(temp*dig);
             temp=temp*10;
        }
        
        return ans;
    }

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

   int test ;
   cin >> test;

   while(test--){
       long long n;
       cin >> n;

       cout << findNth(n) << endl;
   }

}