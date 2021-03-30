//............ find sum of all digits in a number ...........

#include<bits/stdc++.h>
using namespace std;

int SumOfDigits(int n){
    if(n<10)
     return n;

   return n%10 + SumOfDigits(n/10);

}

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
    #endif
       freopen("output.txt","w",stdout);
      
     int n; cin >> n;

    cout << SumOfDigits(n);

    return 0;   
}