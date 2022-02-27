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
        int n;
        cin >> n;

        double sum = 0;
        int mx = INT_MIN;
        for(int i=0; i<n; i++){
            int x ;
            cin >> x;
            sum += x;
            mx = max(mx, x);
        }

        double ans = mx+(sum-mx)/(n-1);

        cout << fixed << setprecision(9) << ans << endl;
              
    }

    return 0;

}