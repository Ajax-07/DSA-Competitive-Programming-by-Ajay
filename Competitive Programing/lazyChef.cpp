// codechef : lazy safe - [https://www.codechef.com/START4C/problems/LAZYCHF] 

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x, m, d;
    cin >> x >> m >> d;

    int maxTime= x*m;
     
   if(maxTime-x > d)
       maxTime = x+d;

    cout << maxTime << endl;    
}

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r", stdin);
       freopen("output.txt", "w", stdout);
    #endif

    int test;
    cin >> test;

    while(test--) solve();

    return 0;
}