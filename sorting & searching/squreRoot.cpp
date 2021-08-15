// #4 - [https://practice.geeksforgeeks.org/problems/count-squares3649/1#]

#include<bits/stdc++.h>
using namespace std;

 int countSquares(int N) {
        // code here
        int count=0;
        for(int i=1; i*i<N; i++){
            count++;
        }
        
        return count;
    }
 
int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r", stdin);
       freopen("output.txt", "w", stdout);
    #endif

    int n; cin >> n;
    cout << countSquares(n);

    return 0;
}   