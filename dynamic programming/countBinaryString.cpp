#include<bits/stdc++.h>
using namespace std;

int countBinStr(int n){
    
    int oczeros=1;
    int ocones=1;

    for(int i=2; i<=n; i++){
       int nczeros = ocones;
       int ncones = ocones+oczeros;

       ocones = ncones;
       oczeros = nczeros;
    }

    return ocones+oczeros;
}

int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin); 
      freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    cout << countBinStr(n);
    return 0;
}